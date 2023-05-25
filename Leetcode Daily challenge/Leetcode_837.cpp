class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
      if(k==0 || n>=k+maxPts)
       return 1.0;
    vector<double>v(n+1);
    v[0]=1.0;
    double cs=1.0;
    double ans=0.0;
    for(int i=1;i<n+1;i++){
        v[i]=cs/maxPts;
        if(i<k)
          cs+=v[i];
        else
          ans+=v[i];
    if(i-maxPts>=0)
       cs-=v[i-maxPts];
    }
    return ans;
    }
};