class Solution {
public:
    int rob(vector<int>& nums) {
        int p1=0,p2=0;
        for(int i=0;i<nums.size();i++){
            int k=max(p1+nums[i],p2);
            p1=p2;
            p2=k;
        }
        return p2;
    }
};