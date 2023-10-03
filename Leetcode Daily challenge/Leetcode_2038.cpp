class Solution {
public:
    bool winnerOfGame(string s) {
       int a=0,b=0;
       for(int i=1;i<s.size()-1;i++){
           char cc=s[i];
           char pc=s[i-1];
           char nc=s[i+1];
           if(cc=='A' && pc=='A' && nc=='A')
             a++;
           else if(cc=='B' && pc=='B' && nc=='B')
              b++;
       } 
       return a>b;
    }
};