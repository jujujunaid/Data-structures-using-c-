class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>v;
        unordered_map<int,int>mp;
        for(auto i:nums)
           mp[i]++;
        priority_queue<pair<int,int>>pq;
        for(auto i:mp)
          pq.push(make_pair(i.second,i.first));
        for(int i=0;i<k;i++){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};