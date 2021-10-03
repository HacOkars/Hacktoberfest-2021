/*
Intersection Point in Y Shapped Linked Lists 

Medium Accuracy: 49.55% Submissions: 100k+ Points: 4
Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.

 

Example 1:

Input:
LinkList1 = 3->6->9->common
LinkList2 = 10->common
common = 15->30->NULL
Output: 15
Explanation:
Y ShapedLinked List
Example 2:

Input: 
Linked List 1 = 4->1->common
Linked List 2 = 5->6->1->common
common = 8->4->5->NULL
Output: 8
Explanation: 

4              5
|              |
1              6
 \             /
  8   -----  1 
   |
   4
   |
  5
  |
  NULL       
Your Task:
You don't need to read input or print anything. The task is to complete the function intersetPoint() which takes the pointer to the head of 
linklist1(head1) and linklist2(head2) as input parameters and returns data value of a node where two linked lists intersect. If linked list do not 
merge at any point, then it should return -1.
Challenge : Try to solve the problem without using any extra space.

 
Expected Time Complexity: O(N+M)
Expected Auxiliary Space: O(1)

 
Constraints:
1 = N + M = 2*105
-1000 = value = 1000
*/

#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int m=0;
    int n=0;
    Node *t1=head1;
    Node *t2=head2;
    while(t1!=NULL)
    {
        t1=t1->next;
        m++;
    }
    while(t2!=NULL)
    {
        t2=t2->next;
        n++;
    }
    int d=abs(m-n);
    if(m>n)
    {
        while(d--)
        head1=head1->next;
    }
    else
    {
        while(d--)
        head2=head2->next;
    }
    
    while(head1!=head2)
    {
        head1=head1->next;
        head2=head2->next;
    }
    return head1->data;
}




/*

//second method

int intersectPoint(Node* head1, Node* head2)
{
// Your Code Here
unordered_set<Node*>s;
while(head1)
{
s.insert(head1);
head1=head1->next;
}
while(head2)
{
if(s.find(head2)!=s.end())
{
return head2->data;
}
head2=head2->next;
}
return -1;
} */

