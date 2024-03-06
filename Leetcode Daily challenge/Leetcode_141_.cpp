class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* t=head;
        ListNode* t2=head;
        while(t2!=NULL && t2->next!=NULL){
            t=t->next;
            t2=t2->next->next;
            if(t==t2)
             return 1;
        }
        return 0;
    }
};