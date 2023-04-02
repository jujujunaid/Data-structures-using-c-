class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
       sort(potions.begin(),potions.end());
       int n=potions.size();
       vector<int>v;
       for(int i=0;i<spells.size();i++){
           long long ot=success/spells[i];
           int pos=lower_bound(potions.begin(),potions.end(),ot)-potions.begin();
           while(pos<n && (long long)potions[pos]*spells[i]<success)
           pos++;
        v.push_back(n-pos);
       }
        return v;
    }
};