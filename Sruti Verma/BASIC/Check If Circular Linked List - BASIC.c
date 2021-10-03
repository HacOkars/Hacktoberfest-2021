/*
Check If Circular Linked List 

Basic Accuracy: 50.74% Submissions: 57470 Points: 1
Given head, the head of a singly linked list, find if the linked list is circular or not. A linked list is called circular if it not NULL terminated 
and all nodes are connected in the form of a cycle. An empty linked list is considered as circular.

Example 1:

Input:
LinkedList: 1->2->3->4->5
(the first and last node is connected,
i.e. 5 --> 1)
Output: 1
Example 2:

Input:
LinkedList: 2->4->6->7->5->1
Output: 0
Your Task:
The task is to complete the function isCircular() which checks if the given linked list is circular or not. It should return true or false accordingly.
(the driver code prints 1 if the returned values is true, otherwise 0)

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <=Number of nodes<= 100
*/


//Initial Template for C

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct Node
{
	int data;
	struct Node* next;
};


 // } Driver Code Ends
//User function Template for C

/* Should return true if linked list is circular, else false */
bool isCircular(struct Node *head){
    //code here
    struct Node* t=head;int f=0;
    t=t->next;
    while(t){
        if(t==head)
         {f=1;break;}
        t=t->next;
    }
    if(f)
    return true;
    return false;
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, k;
		scanf("%d", &n);
		scanf("%d", &k);
		int first;
		scanf("%d", &first);
		struct Node *head;
		head = (struct Node *) malloc(sizeof(struct Node));
		head->data = first;
		head->next = NULL;
		struct Node *tail = head;

		for (int i = 1; i < n; ++i)
		{
			int data;
			scanf("%d", &data);
			struct Node *temp;
			temp = (struct Node *) malloc(sizeof(struct Node));
			temp->data = data;
			temp->next = NULL;
			tail->next = temp;
			tail = tail->next;
		}

        if (k==1 && n >= 1)
            tail->next = head;
		
		printf("%d \n", isCircular(head));
	}
	return 0;
}  // } Driver Code Ends

