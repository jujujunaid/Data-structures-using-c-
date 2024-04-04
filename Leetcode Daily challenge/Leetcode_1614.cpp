class Solution {
public:
    int maxDepth(string s) {
     int ans=0,c=0;
     for(auto i:s){
        if(i=='(')
         c++;
        if(i==')'){
            ans=max(ans,c);
            c--;
        }
     }
     return ans;
    }
};