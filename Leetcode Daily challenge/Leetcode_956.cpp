class Solution {
public:
    int tallestBillboard(vector<int>& rods) {
        int sum=0;
        for(int i:rods)
         sum+=i;
        int dp[sum+1];
        dp[0]=0;
        for(int i=1;i<=sum;i++)
          dp[i]=-1;
        for(int rod:rods){
            int dc[sum+1];
            copy(dp,dp+(sum+1),dc);
            for(int i=0;i<=sum-rod;i++){
                if(dc[i]<0)
                  continue;
                dp[i+rod]=max(dp[i+rod],dc[i]);
                dp[abs(i-rod)]=max(dp[abs(i-rod)],dc[i]+min(i,rod));
            }
        }
        return dp[0];
    }
};