class Solution{
public:
    int remove_duplicate(int nums[],int n){
         int j=1;
      for(int i=1;i<n;i++){
          if(nums[i]!=nums[i-1]){
              nums[j]=nums[i];
              j++;
          }
      }
      return j; 
    }
};