class Solution {
public:
int maxi=0;
   void ans(TreeNode* root,int dir,int len){
       if(root==NULL)
       return;
       maxi=max(maxi,len);
       if(dir==0){
           ans(root->left,dir,1);
           ans(root->right,dir^1,len+1);
       }
       else{
           ans(root->left,dir^1,len+1);
           ans(root->right,dir,1);
       }
       return;
   }
    int longestZigZag(TreeNode* root) {
        ans(root->left,0,1);
        ans(root->right,1,1);
        return maxi;
    }
};