class Solution {
public:
    int longestSubsequence(vector<int>& nums, int d) {
     unordered_map<int,int>mp;
     int mx=0;
     for(int i=0;i<nums.size();i++){
         int c=nums[i];
         if(mp.find(c-d)!=mp.end())
         mp[c]=mp[c-d]+1;
         else
           mp[c]=1;
        mx=max(mx,mp[c]);
     }
     return mx;
    }
};