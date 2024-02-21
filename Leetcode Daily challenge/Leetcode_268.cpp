class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1=0,sum2=0;
      for(int i=0;i<nums.size();i++){
      sum1+=nums[i]; 
      sum2+=i;
      }
     return (nums.size()+sum2)-sum1; 
    }
};