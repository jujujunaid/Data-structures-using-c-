class Solution {
public:
    int countHomogenous(string s) {
     long long res=0;
     int start=0;
     for(int i=0;i<s.size();i++){
         if(s[i]!=s[start]){
             int ap=i-start;
             while(ap>0){
                 res+=ap;
                 ap--;
             }
             start=i;
         }
     }   
     int ap=s.size()-start;
     while(ap>0){
         res+=ap;
         ap--;
     }
     return static_cast<int>(res%(1000000007));
    }
};