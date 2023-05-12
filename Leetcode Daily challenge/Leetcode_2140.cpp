class Solution {
public:
    long long mostPoints(vector<vector<int>>& q) {
       long long ans=0;
       vector<long long>dp(q.size()+1,0);
       for(int i=q.size()-1;i>=0;i--){
           int fu=q[i][1]+i+1;
           if(fu>q.size())
             dp[i]=q[i][0];
          else
             dp[i]=q[i][0]+dp[fu];
             ans=max(ans,dp[i]);
           dp[i]=max(dp[i],dp[i+1]);
       } 
       return ans;
    }
};