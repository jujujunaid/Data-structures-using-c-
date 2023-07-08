class Solution {
public:
    long long putMarbles(vector<int>& v, int k) {
      int n=v.size();
      long long mx=v[0]+v[n-1];
      long long mn=v[0]+v[n-1];
      vector<long long>as;
      for(int i=0;i<n-1;i++)
        as.push_back(v[i]+v[i+1]);
        sort(as.begin(),as.end(),greater<int>());
        for(int i=0;i<k-1;i++){
           mx+=(long long)as[i];
           mn+=(long long)as[n-i-2];
        }
        return mx-mn;
    }
};