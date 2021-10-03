/* Sorted insert for circular linked list 

Easy Accuracy: 26.7% Submissions: 40552 Points: 2
Given a sorted circular linked list, the task is to insert a new node in this circular list so that it remains a sorted circular linked list.

Example 1:

Input:
LinkedList = 1->2->4
(the first and last node is connected,
i.e. 4 --> 1)
data = 2
Output: 1 2 2 4
Example 2:

Input:
LinkedList = 1->4->7->9
(the first and last node is connected,
i.e. 9 --> 1)
data = 5
Output: 1 4 5 7 9
Your Task:
The task is to complete the function sortedInsert() which should insert the new node into the given circular linked list and return the head of the linkedlist.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
0 <= N <= 105 */

#include<bits/stdc++.h>
/* structure for a Node */
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
  
};

void sortedInsert(struct Node**head_ref, int x);
/* function to insert a new_Node in a list in sorted way.
   Note that this function expects a pointer to head Node
   as this can modify the head of the input linked list */

/* Function to print Nodes in a given linked list */
void printList(struct Node *start)
{
  struct Node *temp;

  if(start != NULL)
  {
    temp = start;
    do { printf("%d ", temp->data);
      temp = temp->next;
    } while(temp != start);
    printf("\n");
  }
}
/* Driver program to test above functions */
int main()
{
int t,n,x;
scanf("%d",&t);
int arr;
  while(t--){
  scanf("%d",&n);
  int list_size, i;
  
  /* start with empty linked list */
  struct Node *start = NULL;
  struct Node *temp,*r;
  
  
    /* Create linked list from the array arr[].
    Created linked list will be 1->2->11->56->12 */
    if(n>0){
      scanf("%d",&arr);
    
    temp = new Node(arr);
    start=temp;
    r=start;
    }
    for (i = 0; i<n-1; i++)
    {
        scanf("%d",&arr);
        temp = new Node(arr);
        r->next=temp;
        r=r->next;
    }
    
    if(n>0)
    temp->next=start;
 
    scanf("%d",&x);
    sortedInsert(&start,x);
    printList(start);
    r=start;
    while(r!=start->next)
    {

      temp=start;
      start=start->next;
      free(temp);
    }
    free(start);
}
  return 0;
}
// } Driver Code Ends
/* structure for a node */
/*
struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
  
};
 */
void sortedInsert(Node** head, int x)
{
      Node * temp = (*head);
      if(temp->next==temp)
      {
          // single node
          if(x<=temp->data)
          {
              Node * newnode = new Node(x);
              newnode->next = temp;
              temp->next = newnode;
              (*head) = newnode;
              return;
          }
          else
          {
              Node * newnode = new Node(x);
              temp->next = newnode;
              newnode->next = temp;
              (*head) = newnode;
              return;
          }
      }
      else
      {
          // multiple nodes
          while(temp->next!=(*head))
          {
              temp = temp->next;
          }
          temp->next = NULL;
          // circular LL broken
          // insert correctly now
          
          Node * k = (*head);
          if(x<k->data)
          {
              // first node
              Node * newnode = new Node(x);
              newnode->next = (*head);
              temp->next = newnode;
              (*head) = newnode;
              return;
          }
          else if(x>temp->data)
          {
              Node * newnode = new Node(x);
              temp->next = newnode;
              newnode->next = (*head);
              (*head) = (*head);
              return;
          }
          else
          {
              while(k->next)
              {
                  if(x>=k->data && x<=k->next->data)
                  {
                       Node * newnode = new Node(x);
                       Node * p = k->next;
                       k->next = newnode;
                       newnode->next = p;
                       temp->next = (*head);
                       (*head) = (*head);
                       return;
                  }
                  k=k->next;
              }
          }
      }
}
