class Solution {
public:
    double average(vector<int>& salary) {
       int mn=salary[0],mx=salary[0],avg=0;
       for(int i=0;i<salary.size();i++){
           mn=min(mn,salary[i]);
           mx=max(mx,salary[i]);
           avg+=salary[i];
       } 
       double ans=avg-(mx+mn);
       return ans/(salary.size()-2);
    }
};