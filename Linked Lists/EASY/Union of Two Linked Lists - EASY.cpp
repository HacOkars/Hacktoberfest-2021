/*
Union of Two Linked Lists 

Easy Accuracy: 50.08% Submissions: 20281 Points: 2
Given two linked lists, your task is to complete the function makeUnion(), that returns the union of two linked lists. This union should include all 
the distinct elements only.

Example 1:

Input:
L1 = 9->6->4->2->3->8
L2 = 1->2->8->6->2
Output: 1 2 3 4 6 8 9
Your Task:
The task is to complete the function makeUnion() which makes the union of the given two lists and returns the head of the new list.

Note: The new list formed should be in non-decreasing order.

Expected Time Complexity: O(N * Log(N))
Expected Auxiliary Space: O(N)

Constraints:
1
*/

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printList(struct node *node)
{
    while(node!=NULL){
        cout<<node->data<<' ';
        node = node->next;
    }
    printf("\n");
}

void push(struct node** head_ref, int new_data)
{
    struct node* new_node =	new node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

struct node* makeUnion(struct node* head1, struct node* head2);

int main()
{
    long test;
    cin>>test;
    while(test--)
    {
        struct node* a = NULL;
        struct node* b = NULL;
        int n, m, tmp;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tmp;
            push(&a, tmp);
        }
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>tmp;
            push(&b, tmp);
        }
        printList(makeUnion(a, b));
    }
    return 0;
}
// } Driver Code Ends


/*
structure of the node is as
struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
struct node* makeUnion(struct node* head1, struct node* head2)
{
set<int>s;
while(head1!=NULL)
{
s.insert(head1->data);

head1=head1->next;

}

while(head2!=NULL)
{
s.insert(head2->data);
head2=head2->next;
}
node* head=NULL;
for(auto it=s.rbegin();it!=s.rend();it++)
push(&head,*it);
return head;
}


