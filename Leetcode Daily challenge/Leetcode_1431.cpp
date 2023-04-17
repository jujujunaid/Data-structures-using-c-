class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
       vector<int>v;
       for(int i=0;i<candies.size();i++)
       v.push_back(candies[i]);
       sort(v.begin(),v.end());
       int n=v[v.size()-1];
       vector<bool>t;
       for(int i=0;i<candies.size();i++){
             if(candies[i]+e>=n)
             t.push_back(true);
             else
             t.push_back(false);
       } 
       return t;
    }
};