class Solution {
public:
 int solven(string& a,string&b){
       vector<vector<int> >v(a.length()+1,vector<int>(b.length()+1,0));
       for(int i=a.length()-1;i>=0;i--){
           for(int j=b.length()-1;j>=0;j--){
               int ans=0;
            if(a[i]==b[j]){
          ans=1+v[i+1][j+1];
      }
      else{
          ans=max(v[i+1][j],v[i][j+1]);
      }
      v[i][j]=ans;
           }
       }
       return v[0][0]; 
    }
    int longestPalindromeSubseq(string s) {
        string str=s;
        reverse(s.begin(),s.end());
        return solven(s,str);
    }
};