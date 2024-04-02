class Solution {
public:
    bool isIsomorphic(string s, string t) {
   vector<char>c(256);
        vector<int>v(256,0);
        for(int i=0;i<s.size();i++){
            if(v[s[i]]==0){
                c[t[i]]=s[i];
                v[s[i]]=-1;
            }
        }
        for(int i=0;i<s.size();i++)
            t[i]=c[t[i]];
        if(s==t)
            return true;
            return false; 
    }
};