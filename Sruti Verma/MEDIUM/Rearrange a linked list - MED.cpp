/*
Rearrange a linked list 

Medium Accuracy: 49.14% Submissions: 26243 Points: 4
Given a singly linked list, the task is to rearrange it in a way that all odd position nodes are together and all even positions node are together.
Assume the first element to be at position 1 followed by second element at position 2 and so on.
Note: You should place all odd positioned nodes first and then the even positioned ones. (considering 1 based indexing). Also, the relative order of 
odd positioned nodes and even positioned nodes should be maintained.

Example 1:

Input:
LinkedList: 1->2->3->4
Output: 1 3 2 4 
Explanation: 
Odd elements are 1, 3 and even elements are 
2, 4. Hence, resultant linked list is 
1->3->2->4.
Example 2:

Input:
LinkedList: 1->2->3->4->5
Output: 1 3 5 2 4 
Explanation: 
Odd elements are 1, 3, 5 and even elements are
2, 4. Hence, resultant linked list is
​1->3->5->2->4.
Your Task:
The task is to complete the function rearrangeEvenOdd() which rearranges the nodes in the linked list as required and doesn't return anything.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 = Size of the linked list = 104
1 = value of linked list = 103
*/

// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};



 // } Driver Code Ends
/* Node structure

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
    public:
    Node *rearrangeEvenOdd(Node *head)
    {
       // Your Code here
       if(head==NULL||head->next==NULL||head->next->next==NULL)
        return head;
       Node* o=head,*e=head->next,*o1=head,*e1=e;
       while(o->next&&o->next->next){
           o->next=e->next;
           o=o->next;
           e->next=o->next;
           e=e->next;
       }
       o->next=e1;
       return o1;
    }
};


// { Driver Code Starts.

/* Driver program to test above function*/
int main()
{
    int T,i,n,l;

    cin>>T;

    while(T--)
    {
        struct Node *head = NULL;
        struct Node *temp = head;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>l;

            if (head == NULL)
            {   
                head = temp = new Node(l); 
                
            }
            else
            {  temp->next = new Node(l);
               temp = temp->next;
            }
        }
        Solution ob;
        head = ob.rearrangeEvenOdd(head);
        while(head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends
