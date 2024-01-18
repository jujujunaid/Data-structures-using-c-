class Solution {
public:
    int climbStairs(int n) {
       if(n<=1)
       return n;
       int prev1=0,prev2=1;
       for(int i=0;i<n;i++){
           int k=prev1+prev2;
           prev1=prev2;
           prev2=k;
       }
       return prev2;
    }
};