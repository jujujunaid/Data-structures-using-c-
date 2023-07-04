class Solution {
public:
    bool buddyStrings(string s, string g) {
        if(s.size()!=g.size())
         return 0;
        if(s==g){
            unordered_set<char>ds(s.begin(),s.end());
            return ds.size()<s.length();
        } 
        vector<int>id;
        for(int i=0;i<s.size();i++){
            if(s[i]!=g[i])
             id.push_back(i);
        }
        if(id.size()!=2)
          return 0;
        swap(s[id[0]],s[id[1]]);
        return s==g;
    }
};