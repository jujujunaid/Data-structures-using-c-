class Solution {
public:
   void inorder(TreeNode* root,vector<int>&v){
       if(root){
           inorder(root->left,v);
           v.push_back(root->val);
           inorder(root->right,v);
       }
       else
       return;
   }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        return v;
    }
};