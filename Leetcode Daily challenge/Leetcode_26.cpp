class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         ListNode* temp=NULL;
      ListNode* cur=head;
      ListNode* prv=NULL;
      while(cur!=NULL){
          temp=cur->next;
          cur->next=prv;
          prv=cur;
          cur=temp;
      }  
      return prv;
    }
};