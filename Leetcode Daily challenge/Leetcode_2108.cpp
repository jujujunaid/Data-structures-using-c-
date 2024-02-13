class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string tmp;
        for(auto s : words){
            tmp=s;
            reverse(tmp.begin(), tmp.end());
            if (s==tmp) 
              return s;
        }
        return ""; 
    }
};