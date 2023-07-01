class Solution {
public:
     void help(int start,vector<int>& ck,vector<int>& v, int k,int& ans){
         int n=ck.size();
         if (start==n){
             int mx=INT_MIN;
             for(int i=0;i<k;i++)
               mx=max(mx,v[i]);
              ans=min(ans,mx);
              return;
         }
         for(int i=0;i<k;i++){
             v[i]+=ck[start];
             help(start+1,ck,v,k,ans);
             v[i]-=ck[start];
         }
     }
    int distributeCookies(vector<int>& cookies, int k) {
       int ans=INT_MAX;
       vector<int>v(k,0);
       help(0,cookies,v,k,ans);
       return ans; 
    }
};