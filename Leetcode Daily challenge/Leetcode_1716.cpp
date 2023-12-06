class Solution {
public:
    int totalMoney(int n) {
       int s=n/7,m=n%7;
       return 7*((s*(s+1)/2)+3*s)+(m*(m+1)/2)+m*s ;
    }
};