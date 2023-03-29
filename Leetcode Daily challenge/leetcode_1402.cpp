class Solution {
public:
int sol(vector<int>&s){
    int n=s.size();
    vector<int>curr(n+1,0);
    vector<int>next(n+1,0);
    for(int i=n-1;i>=0;i--){
        for(int j=i;j>=0;j--){
            int include=s[i]*(j+1)+next[j+1];
            int exclude=0+next[j];
            curr[j]=max(include,exclude);
        }
        next=curr;
    }
    return next[0];
}
    int maxSatisfaction(vector<int>& s) {
      sort(s.begin(),s.end());
      return sol(s);  
    }
};