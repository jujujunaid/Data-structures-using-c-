class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       vector<vector<int>>v(n,vector<int>(n,1));
       int l=0,r=n-1,t=0,d=n-1,id=1;
       while(l<=r && t<=d){
           for(int j=l;j<=r;j++){
               v[t][j]=id;
               id++;
           }
           t++;
           for(int i=t;i<=d;i++){
               v[i][r]=id;
               id++;
           }
           r--;
           for(int j=r;j>=l;j--){
               v[d][j]=id;
               id++;
           }
           d--;
           for(int i=d;i>=t;i--){
               v[i][l]=id;
               id++;
           }
           l++;
       } 
       return v;
    }
};