/*
Linked List in Zig-Zag fashion 

Easy Accuracy: 51.51% Submissions: 10728 Points: 2
Given a Linked list, rearrange it such that converted list should be of the form a < b > c < d > e < f .. where a, b, c are consecutive data node of 
linked list and such that the order of linked list is sustained.
For example: In 11 15 20 5 10 we consider only 11 20 5 15 10 because it satisfies the above condition and the order of linked list. 5 20 11 15 10 is 
not considered as it does not follow the order of linked list.

To maintain the order, keep swapping the adjacent nodes of the linked list (whenever required) to get the desired output.  

Example 1:

Input:
LinkedList: 1->2->3->4 
Output: 1 3 2 4
Example 2:

Input:
LinkedList: 11->15->20->5->10
Output: 11 20 5 15 10
Explanation: In the given linked list,
after arranging them as 11 < 20 > 5
< 15 > 10 in the pattern as asked above.
Your Task:
The task is to complete the function zigZag() which should reorder the list as required and return the head of the linked list.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= size of linked list(a) <= 1000
*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *root)
{
	Node *temp = root;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
 
 Node *zigZack(Node* head);


int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		Node *ans = zigZack(head);
		print(ans);
		cout<<endl;
	}
	return 0;
}// } Driver Code Ends


/*

The structure of linked list is the following
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/


Node *zigZack(Node* head)
{
if(head == NULL || head->next == NULL)
return head;
else
{
int a = head->data;
int b = head->next->data;
head->data = min(a,b);
head->next->data = max(a,b);
if(head->next->next)
{
if(head->next->next->data > head->next->data)
swap(head->next->next->data,head->next->data);
}
}
head->next->next = zigZack(head->next->next);
return head;
}


