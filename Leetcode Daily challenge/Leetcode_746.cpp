class Solution {
public:
     int solve(vector<int>& cost,int n){
      vector<int>dp(n+1);
      int prev1=cost[0];
      int prev2=cost[1];
      for(int i=2;i<n;i++){
          int cur=cost[i]+min(prev1,prev2);
          prev1=prev2;
          prev2=cur;
      }
      return min(prev1,prev2);
     }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        return solve(cost,n);
    }
};