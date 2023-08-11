class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int>v(amount+1);
        v[0]=1;
        for(int i=0;i<coins.size();i++){
            for(int j=coins[i];j<=amount;j++)
              v[j]+=v[j-coins[i]];
        }
        return v[amount];
    }
};