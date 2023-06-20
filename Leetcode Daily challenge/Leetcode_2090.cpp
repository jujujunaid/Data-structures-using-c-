class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        int ws=2*k+1;
        vector<int>v(n,-1);
        if(n<ws)
          return v;
        vector<long long>ps(n+1);
        for(int i=0;i<n;++i)
          ps[i+1]=ps[i]+nums[i];
        for(int i=k;i+k<n;++i)
           v[i]=(ps[i+k+1]-ps[i-k])/ws;
        return v;
    }
};