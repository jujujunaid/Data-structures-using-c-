class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
     ListNode* start=head;
     ListNode* end=head;
     for(int i=0;i<k-1;i++)
       start=start->next;
    ListNode* one=start;
    while(start->next){
        end=end->next;
        start=start->next;
    }
    swap(one->val,end->val);
    return head;
    }
};