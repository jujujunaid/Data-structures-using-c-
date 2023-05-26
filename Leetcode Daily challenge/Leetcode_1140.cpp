class Solution {
public:
   int dp[101][201];
   int help(int i,int m,vector<int>&p){
       if(p.size()<=i)
          return 0;
       if(dp[i][m]!=-1)
          return dp[i][m];
          int t=0;
          int ans=INT_MIN;
       for(int j=0;j<2*m;j++){
           if(i+j<p.size())
              t+=p[i+j];
           ans=max(ans,t-help(i+j+1,max(m,j+1),p));
       }
       return dp[i][m]=ans;
   }
    int stoneGameII(vector<int>& piles) {
     int sum=0;
     memset(dp,-1,sizeof dp);
     for(auto i:piles)
        sum+=i;
     int dif=help(0,1,piles);
     return (sum+dif)/2;   
    }
};