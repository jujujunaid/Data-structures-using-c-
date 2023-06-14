class Solution {
public:
     int md=INT_MAX;
     int vl=-1;
    int getMinimumDifference(TreeNode* root) {
     if(root->left!=NULL)  
        getMinimumDifference(root->left);
     if(vl>=0)
        md=min(md,root->val-vl);
     vl=root->val;
     if(root->right!=NULL)
       getMinimumDifference(root->right);
    return md; 
    }
};