class Solution {
public:
    int minimumOneBitOperations(int n) {
      int r;
      for(r=0;n>0;n&=n-1)
        r=-(r+(n^(n-1)));
    return abs(r);  
    }
};