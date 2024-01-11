class Solution {
public:
    int maxAncestorDiff(TreeNode* root,int maxi=0,int mini=100000) {
        if(root==NULL)
        return maxi-mini;
       maxi=max(root->val,maxi);
       mini=min(root->val,mini);
       return max(maxAncestorDiff(root->right,maxi,mini),maxAncestorDiff(root->left,maxi,mini));
    }
};