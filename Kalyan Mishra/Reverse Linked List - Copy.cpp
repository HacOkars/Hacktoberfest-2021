//https://leetcode.com/problems/reverse-linked-list/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *b=NULL,*c=NULL;
        
        while(head!=NULL)
        {
            c=b;
            b=head;
            head=head->next;
            b->next=c;
        }
        return b;
        
    }
};