/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode* temp=head;
         ListNode* tp=NULL;
        int len=0;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        temp=head;
        if(len==n)
            return head->next;
        else{
        for(int i=1;i<len-n;i++)
        {
            temp=temp->next;
        }
                temp->next=(temp->next)->next;
        return head;   
    }
    }
};