class Solution {
public:
    int minMoves2(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int c=0,i=0,j=nums.size()-1;
       while(i<=j){
         c+=nums[j]-nums[i];
         i++;
         j--;
       } 
       return c;
    }
};