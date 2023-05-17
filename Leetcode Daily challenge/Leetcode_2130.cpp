class Solution {
public:
    int pairSum(ListNode* head) {
       vector<int>v;
       ListNode* tmp=head;
       while(tmp){
           v.push_back(tmp->val);
           tmp=tmp->next;
       } 
       int n=v.size();
       int s=n-1,ans=0;
       for(int i=0;i<=(n/2)-1;i++){
           ans=max(ans,(v[i]+v[s]));
           s--;
       }
       return ans;
    }
};