class Solution {
public:
    int longestSubarray(vector<int>& nums) {
     int l=0,r=0;
     int mx=0,c=0,t=0;
     while(r<nums.size()){
       if(nums[r]==0){
         c++;
         while(c>1){
           if(nums[l]==0)
             c--;
           else
             t--;
          l++;
         }
         }
         else{
           t++;
           mx=max(mx,t);
         }
         r++;
     }
     if(mx==nums.size())
      mx--;
      return mx;
    }
};