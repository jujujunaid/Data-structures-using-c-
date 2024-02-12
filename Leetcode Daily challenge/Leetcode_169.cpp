class Solution {
public:
    int majorityElement(vector<int>& nums) {
      unordered_map<int,int>mp;
      int c=0,ans=0;
      for(auto i:nums)
       mp[i]++;
       for(auto i:mp)
        if(i.second>c){
            ans=i.first;
            c=i.second;
        }
      return ans;
    }
};