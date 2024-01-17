class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      unordered_map<int,int>mp;
      for(auto i :arr)
       mp[i]++;
       unordered_map<int,int>ans;
       for(auto i:mp)
        ans[i.second]++;
        return ans.size()==mp.size();  
    }
};