//https://leetcode.com/problems/middle-of-the-linked-list/
class Solution {
public:
    /* MEthod 1 o(n)time
    
    int findSize(ListNode *p)
    {int count=0;
        while(p->next!=NULL){
            count++;
            p=p->next;
        }
     return count;
    }
    ListNode* middleNode(ListNode* head) {
        int n=findSize(head);
        n=(n+1)/2;  
        ListNode *p=head;
        for(int i=0;i<n;i++)
        {
            p=p->next;
        }
        return p;
    }
    */

	ListNode* middleNode(ListNode* head) {
		ListNode *slow=head,*fast=head;
		while(fast!=NULL && fast->next!=NULL){
			slow=slow->next;
			fast=fast->next;
			if(fast->next!=NULL){
				fast=fast->next;
			}
		}
		return slow;
	}
};
