class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mp;
        for(auto i:deck)
        mp[i]++;
        int ans=0;
        for(auto i:mp)
         ans=gcd(i.second,ans);
        return ans>1;
    }
};