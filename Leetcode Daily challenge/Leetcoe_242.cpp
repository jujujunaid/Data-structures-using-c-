class Solution {
public:
    bool isAnagram(string s, string t) {
       map<char,int>mp;
       for(auto i:s)
       mp[i]++;
       for(auto i:t){
           mp[i]--;
           if(mp[i]==0)
           mp.erase(i);
       }
       return mp.empty();
    }
};