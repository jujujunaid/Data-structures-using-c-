class Solution {
public:
static bool cmp(vector<int>&a,vector<int>& b){
          return a[1]<b[1];
          }
    int eraseOverlapIntervals(vector<vector<int>>& it) {
     int n=it.size();
     sort(it.begin(),it.end(),cmp);
     int p=0,c=1;
     for(int i=1;i<n;i++){
         if(it[i][0]>=it[p][1]){
             p=i;
             c++;
         }
     }   
     return  n-c;
    }
};