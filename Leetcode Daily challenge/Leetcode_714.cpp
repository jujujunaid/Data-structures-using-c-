class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
       int by=INT_MIN;
       int sl=0;
       for(int i:prices){
           by=max(by,sl-i);
           sl=max(sl,by+i-fee);
       } 
      return sl;
    }
};