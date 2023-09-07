class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
         ListNode *dummy = new ListNode(0);
           dummy->next = head;
        ListNode *cur = dummy; 
        for(int i = 0; i < left - 1; i++)
            cur = cur->next;
        ListNode *prv = cur->next; 
        for(int i = 0; i < right - left; i++){
            ListNode *tmp = prv->next; 
            prv->next = tmp->next;
            tmp->next = cur->next;
            cur->next = tmp;
        }
        return dummy->next;
    }
};