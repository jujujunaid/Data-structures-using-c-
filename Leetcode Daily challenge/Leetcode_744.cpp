class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
        if(t<l[0] || t>=l[l.size()-1])
          return l[0];
        char ans;
        int lo=0,h=l.size()-1;
        while(lo<=h){
            int m=(lo+h)/2;
            if(t<l[m]){
                ans=l[m];
                h=m-1;
            }
            else
              lo=m+1;
        }
        return ans;
    }
};