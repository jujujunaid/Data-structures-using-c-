class Solution {
public:
    void fun(TreeNode* root, vector<int> &v){
        if(root!=NULL){
            if(root->right==NULL && root->left==NULL)
               v.push_back(root->val);
            fun(root->right,v);
            fun(root->left,v);
        }  
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      vector<int>v1;
      vector<int>v2;
      fun(root1,v1);
      fun(root2,v2);
      return  (v1==v2);
    }
};