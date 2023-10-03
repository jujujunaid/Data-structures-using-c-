class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       int c=0;
       unordered_map<int,int>mp;
       for(auto i:nums)
         c+=mp[i]++;
        return c;
    }
};