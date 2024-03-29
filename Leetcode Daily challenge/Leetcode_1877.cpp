class Solution {
public:
    int minPairSum(vector<int>& nums) {
       int mx = INT_MIN;
        int mn = INT_MAX;
        int hash[100001] = {0};
        for (int num : nums) {
            hash[num]++;
            mx = max(mx, num);
            mn = min(mn, num);
        }
        int low = mn;
        int high = mx;
        mx = INT_MIN;
        while (low <= high) {
            if (hash[low] == 0) low++;
            else if (hash[high] == 0) high--;
            else {
                mx =max(mx, low + high);
                hash[low]--;
                hash[high]--;
            }
        }
        return mx;
    }
};