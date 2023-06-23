class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n=nums.size();
        if(n<=2)
          return n;
        int ans=2;
        vector<unordered_map<int,int>>dp(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int d=nums[i]-nums[j];
                dp[i][d]=dp[j].count(d)?dp[j][d]+1:2;
                ans=max(ans,dp[i][d]);
            }
        }
        return ans;
    }
};