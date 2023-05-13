class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
       vector<int>v(high+1);
       int md=1e9+7;
       v[0]=1;  
       for(int i=min(zero,one);i<=high;i++){
         if(i>=zero)
         v[i]=(v[i]+v[i-zero])%md;
         if(i>=one)
         v[i]=(v[i]+v[i-one])%md;
       } 
       int ans=0;
       for(int i=low;i<=high;i++)
       ans=(ans+v[i])%md;
     return ans;
    }
};