class Solution {
public:
    int maxLevelSum(TreeNode* root) {
      int ml=0,ms=INT_MIN,cl=1;
      queue<TreeNode*>q;
      q.push(root);
      while(q.size()>0){
          int sz=q.size();
          int sum=0;
          for(int i=0;i<sz;i++){
              TreeNode* cr=q.front();
              q.pop();
              sum+=cr->val;
              if(cr->left!=NULL)
                q.push(cr->left);
              if(cr->right!=NULL)
                q.push(cr->right);
          }
          if(sum>ms){
              ms=sum;
              ml=cl;
          }
          cl++;
      }  
      return ml;
    }
};