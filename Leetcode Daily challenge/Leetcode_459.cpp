class Solution {
public:
    bool repeatedSubstringPattern(string s) {
         int n = s.length();
        for (int i = 1; i <= n / 2; ++i) {
            if (n % i == 0) {
                string subg = s.substr(0, i);
                string rpt = "";
                for (int j = 0; j < n / i; ++j) {
                    rpt += subg;
                }
                if (rpt == s) return true;
            }
        }
        return false;
    }
};