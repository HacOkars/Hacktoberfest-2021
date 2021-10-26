/*
Merge two sorted linked lists 

Medium Accuracy: 49.26% Submissions: 77017 Points: 4
Given two sorted linked lists consisting of N and M nodes respectively. The task is to merge both of the list (in-place) and return head of the 
merged list.
 

Example 1:

Input:
N = 4, M = 3 
valueN[] = {5,10,15,40}
valueM[] = {2,3,20}
Output: 2 3 5 10 15 20 40
Explanation: After merging the two linked
lists, we have merged list as 2, 3, 5,
10, 15, 20, 40.
Example 2:

Input:
N = 2, M = 2
valueN[] = {1,1}
valueM[] = {2,4}
Output:1 1 2 4
Explanation: After merging the given two
linked list , we have 1, 1, 2, 4 as
output.
Your Task:
The task is to complete the function sortedMerge() which takes references to the heads of two linked lists as the arguments and returns the head of 
merged linked list.

Expected Time Complexity : O(n+m)
Expected Auxilliary Space : O(1)

Constraints:
1 <= N, M <= 104
1 <= Node's data <= 105
*/

//Initial Template for C
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

/* Link list node */
struct Node
{
	int data;
	struct Node* next;
};

/* pull off the front node of the source and put it in dest */
void MoveNode(struct Node** destRef, struct Node** sourceRef);



 // } Driver Code Ends
//User function Template for C

struct Node* SortedMerge(struct Node* a, struct Node* b)
{
    struct Node* t1=a, * t2=b,*head;
    if(t1->data>t2->data)
     {head=t2;t2=t2->next;}
    else
     {head=t1;t1=t1->next;}
    struct Node* t=head;
    while(t1!=NULL&&t2!=NULL){
        if(t1->data>t2->data)
     {t->next=t2;t2=t2->next;t=t->next;}
    else
     {t->next=t1;t1=t1->next;t=t->next;}
    }
    while(t1!=NULL)
     {t->next=t1;t1=t1->next;t=t->next;}
     while(t2!=NULL)
     {t->next=t2;t2=t2->next;t=t->next;}
    return head;
}

// { Driver Code Starts.

/* UTILITY FUNCTIONS */
/* MoveNode() function takes the node from the front of the
source, and move it to the front of the dest.
It is an error to call this with the source list empty.

Before calling MoveNode():
source == {1, 2, 3}
dest == {1, 2, 3}

Affter calling MoveNode():
source == {2, 3}
dest == {1, 1, 2, 3} */
void MoveNode(struct Node** destRef, struct Node** sourceRef)
{
	/* the front source node */
	struct Node* newNode = *sourceRef;
	assert(newNode != NULL);

	/* Advance the source pointer */
	*sourceRef = newNode->next;

	/* Link the old dest off the new node */
	newNode->next = *destRef;

	/* Move dest to point to the new node */
	*destRef = newNode;
}


/* Function to insert a node at the beginging of the
linked list */
void push(struct Node** head_ref, int new_data)
{
	/* allocate node */
	struct Node* new_node =
		(struct Node*) malloc(sizeof(struct Node));

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
	while (node!=NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}

/* Driver program to test above function*/
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d",&n);
        scanf("%d",&m);

        /* Start with the empty list */
      	struct Node* res = NULL;
	    struct Node* a = NULL;
	    struct Node* b = NULL;
	    int arr[n];
	    for (int i = 0; i < n; ++i)
        {   
            scanf("%d",&arr[i]);
        }
        for (int i = n-1; i >=0; i--)
        {  
            push(&a, arr[i]);
        }
        int arr1[m];
        for(int i = 0; i<m; i++)
        {   
            scanf("%d",&arr1[i]);
            
        }
        for(int i = m-1; i>=0; i--)
        {   
            push(&b, arr1[i]);    
        }
        res = SortedMerge(a, b);
        printList(res);
        printf("\n");
    }
    return 0;
}  // } Driver Code Ends
