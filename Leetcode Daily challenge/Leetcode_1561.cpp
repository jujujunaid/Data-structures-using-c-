class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int sum=0,l=piles.size()-(piles.size()/3);
        sort(piles.begin(),piles.end(),greater());
        for(int i=1;i<l;i++)
            sum+=piles[i++];
            return sum;
    }
};