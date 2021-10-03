/*
Swap Kth nodes from ends 

Medium Accuracy: 46.75% Submissions: 25431 Points: 4
Given a singly linked list of size N, and an integer K. You need to swap the Kth node from the beginning and Kth node from the end of the linked list.
Swap the nodes through the links. Do not change the content of the nodes.

 

Example 1:

Input:
N = 4,  K = 1
value[] = {1,2,3,4}
Output: 1
Explanation: Here K = 1, hence after
swapping the 1st node from the beginning
and end thenew list will be 4 2 3 1.
 

Example 2:

Input:
N = 5,  K = 7
value[] = {1,2,3,4,5}
Output: 1
Explanation: K > N. Swapping is invalid. 
Return the head node as it is.
 

Your Task: 
You do not need to read input or print anything. The task is to complete the function swapkthnode(), which has takes head of link list, N and K as 
input parameters and returns the new head.
The generated output will be 1 if you are able to complete your task. 

Expected Time Complexity: O(n)
Expected Auxillary space Complexity: O(1)


Constraints:
1 <= N <= 103
1 <= K <= 103
*/

#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void append(Node** head_ref, Node **tail_ref, int new_data)
{
    Node* newnode = new Node(new_data);
    
    if(*head_ref == NULL)
        *head_ref = newnode;
    else
        (*tail_ref)->next = newnode;
    *tail_ref = newnode;
}

Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K;
        cin>>num>>K;
        int temp;
        Node* head = NULL;
        Node* tail = NULL;
        for(int i = 0; i<num; i++){
            cin>>temp;
            append(&head, &tail, temp);
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends


Node *swapkthnode(Node* head, int num, int k)
{
    if(k>num)
    return head;
    else
    {
    Node *start_prev=NULL;
    Node *start=head;
    Node *end_prev=NULL;
    Node *end=head;
    for(int i=1;i<k;++i)
    {
        start_prev=start;
        start=start->next;
    }
    for(int i=1;i<num-k+1;++i)
    {
        end_prev=end;
        end=end->next;
    }
    if(start_prev)
    start_prev->next=end;
    if(end_prev)
    end_prev->next=start;
    Node *temp=start->next;
    start->next=end->next;
    end->next=temp;
    if(k==1)
    head=end;
    if(k==num)
    head=start;
    return head;
    }
    //cout<<prev->data<<","<<temp->data;
    // Your Code here
}

