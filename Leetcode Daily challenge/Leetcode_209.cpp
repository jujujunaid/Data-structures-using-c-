class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int i=0,j=0,sum=0,mn=INT_MAX;
       while(j<nums.size()){
           sum+=nums[j];
           while(sum>=target){
               sum-=nums[i];
               mn=min(j-i+1,mn);
               i++;
           }
           j++;
       } 
       if(mn==INT_MAX)
          return 0;
        return mn;
    }
};