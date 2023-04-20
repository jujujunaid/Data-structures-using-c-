class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
      if(!root)
      return 0;
      queue<pair<TreeNode* ,int>>q;
      int ans=1;
      q.push({root,0});
      while(!q.empty()){
          int c=q.size(),start=q.front().second,end=q.back().second;
          ans=max(ans,end-start+1);
          for(int i=0;i<c;++i){
              pair<TreeNode*, int>p=q.front();
             long long int id=p.second-start;
              q.pop();
              if(p.first->left)
                q.push({p.first->left,2*id+1});
              if(p.first->right)
                q.push({p.first->right,2*id+2});
          }
      }  
      return ans;
    }
};