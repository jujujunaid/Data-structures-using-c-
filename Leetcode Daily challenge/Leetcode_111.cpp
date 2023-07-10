class Solution {
public:
    int minDepth(TreeNode* root) {
       if(root==NULL)
       return 0;
       if(!root->left)
       return minDepth(root->right)+1;
       if(!root->right)
       return minDepth(root->left)+1;
       return min(minDepth(root->right),minDepth(root->left))+1; 
    }
};