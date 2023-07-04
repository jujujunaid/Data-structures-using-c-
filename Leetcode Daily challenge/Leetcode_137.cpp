class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(auto n:nums)
          mp[n]++;
        for(auto i:mp)
         if(i.second==1)
         return i.first;
    return 0;
    }
};