class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
      int c=-1;
      for(int i=0;i<nums.size()-1;i++){
         if(nums[i]>nums[i+1]){
             if(c!=-1)
             return 0;
             c=i;
         }
      } 
      return c==0||c==-1||c==nums.size()-2||nums[c]<=nums[c+2]||nums[c-1]<=nums[c+1];
    }
};