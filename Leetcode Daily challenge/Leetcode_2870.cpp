class Solution {
public:
    int minOperations(vector<int>& nums) {
      unordered_map<int,int>mp;
      int c=0;
      for(auto i:nums)
        mp[i]++;
      for(auto i:mp){
          int a=i.second;
          if(a==1)
          return -1;
          c+=a/3;
          if(a%3)
           c++;
      }  
      return c;
    }
};