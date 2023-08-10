class Solution {
public:
    bool search(vector<int>& nums, int t) {
        unordered_set<int>st;
        for(auto i:nums)
          st.insert(i);
        if(st.find(t)==st.end())
          return 0;
        return 1;
    }
};