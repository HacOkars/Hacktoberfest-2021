/*
Add 1 to a number represented as linked list 

Easy Accuracy: 51.33% Submissions: 66018 Points: 2
A number N is represented in Linked List such that each digit corresponds to a node in linked list. You need to add 1 to it.

Example 1:

Input:
LinkedList: 4->5->6
Output: 457 
Example 2:

Input:
LinkedList: 1->2->3
Output: 124 
Your Task:
Your task is to complete the function addOne() which takes the head of the linked list as the only argument and returns the head of the modified linked list. The driver code prints the number.
Note: The head represents the left-most digit of the number.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 101000
*/

//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 

Node* addOne(Node *head);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        
        head = addOne(head);
        printList(head); 
    }
    return 0; 
} 
// } Driver Code Ends


//User function template for C++

/* 

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
Node* newnode(int s){
    Node* t=new Node(s);
    return t;
}
Node* reverse(Node* t){
     Node* current = t;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
 
            // Reverse current node's pointer
            current->next = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        t = prev;
        return t;
}
Node* addOne(Node *head) 
{
    // Your Code here
    // return head of list after adding one
    struct Node* t=head,*res=NULL,*t1,*prev;
    int c=0,k=1,sum=0;
    t=reverse(t);
    while(t){
       
        if(k)
         sum=c+t->data+1;
        else
         sum=c+t->data;
        c = (sum >= 10) ? 1 : 0;
        sum=sum%10;
        t1=newnode(sum);
        k=0;
         t=t->next;
        if(res)
         prev->next=t1;
        else
         res=t1;
        prev=t1;
    }
    if(c>0){
        t1->next=newnode(c);
    }
    res=reverse(res);
    return res;
}
