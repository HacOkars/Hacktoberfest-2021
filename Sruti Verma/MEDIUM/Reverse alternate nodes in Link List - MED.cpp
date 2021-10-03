/*
Reverse alternate nodes in Link List 

Medium Accuracy: 50.78% Submissions: 11162 Points: 4
Given a linked list, you have to perform the following task:

Extract the alternative nodes starting from second node.
Reverse the extracted list.
Append the extracted list at the end of the original list.
​Example 1:

Input:
LinkedList = 10->4->9->1->3->5->9->4
Output: 10 9 3 9 4 5 1 4
Explanation: Reversing the alternative
nodes from the given list, and then
appending them to the end of the list
results in a list with the elements as
10 9 3 9 4 5 1 4.
​Example 2:

Input:
LinkedList = 1->2->3->4->5
Output: 1 3 5 4 2 
Explanation:
Your Task:
You don't have to read input or print anything. Your task is to complete the function rearrange() which takes the head of the linked list as input 
and rearranges the list as required.

Note: Try to solve the problem without using any extra memory.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 105
0 <= Node_value <= 1000
*/

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


 // } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
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
class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        //add code here
       // struct Node* t1=head,*t2=head->next,*t3=t2;
        struct Node *t=odd,*m=t->next,*r=t->next;
while(t && t->next && t->next->next!=NULL)
{
t->next=t->next->next;
t=t->next;
m->next=t->next;
m=t->next;
}
t->next=NULL;
m=r;
struct Node *next,*prev=NULL;
while(m!=NULL)
{
next=m->next;
m->next=prev;
prev=m;
m=next;

}
t->next=prev;
       
    }
};



// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}
  // } Driver Code Ends
