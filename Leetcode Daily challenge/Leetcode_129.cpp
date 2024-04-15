class Solution {
public:
    int sumNumbers(TreeNode* root) {
      int total=0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            auto [root,cs]=q.front();
            q.pop();
            cs=cs*10+root->val;
            if(root->left==NULL && root->right==NULL)
            total+=cs;
            if(root->right)
            q.push({root->right,cs});
            if(root->left)
            q.push({root->left,cs});
        }
        return total;  
    }
};