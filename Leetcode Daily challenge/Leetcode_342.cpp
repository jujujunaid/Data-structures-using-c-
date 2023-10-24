class Solution {
public:
    bool isPowerOfFour(int n) {
       if(n==1)
       return 1;
       if(n==0)
       return 0;
       int d;
       while(n!=1){
         d=n%4;
           if(d!=0)
           return 0;
        n/=4;
       } 
       return 1;
    }
};