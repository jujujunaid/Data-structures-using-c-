class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int c=0;
        vector<int>v(2,-1);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target && c==0){
                v[0]=i;
                c++;
            }
            if(nums[i]==target){
                v[1]=i;
            }
        }   
        return v;
    }
};