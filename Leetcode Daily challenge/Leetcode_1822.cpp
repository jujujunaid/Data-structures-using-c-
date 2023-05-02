class Solution {
public:
    int arraySign(vector<int>& nums) {
      int c0=0,c=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]<0)
         c++;
        else if(nums[i]==0)
        c0++;
      }  
      if(c0>0)
       return 0;
      if(c%2!=0)
       return -1;
      return 1;
    }
};