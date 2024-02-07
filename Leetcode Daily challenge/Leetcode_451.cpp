class Solution {
public:
    string frequencySort(string s) {
       vector<pair<int,char>>v('z'+1,{0,0});
       for(char c:s)
         v[c]={v[c].first+1,c};
         sort(v.begin(),v.end());
         string res="";
         for(auto i:v)
         res=string(i.first,i.second)+res;
         return res;
    }
};