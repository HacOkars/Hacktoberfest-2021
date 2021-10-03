/*
Segregate even and odd nodes in a Link List 

Easy Accuracy: 64.41% Submissions: 15686 Points: 2
Given a link list of size N, modify the list such that all the even numbers appear before all the odd numbers in the modified list. The order of 
appearance of numbers within each segregation should be same as that in the original list.


Example 1:

Input: 
N = 7
Link List = 
17 -> 15 -> 8 -> 9 -> 2 -> 4 -> 6 -> NULL

Output: 8 2 4 6 17 15 9

Explaination: 17,15,8,9 are odd so they appear 
first and 2,4,6 are the even numbers that appear later.

Example 2:

Input:
N = 4
Link List = 1 -> 3 -> 5 -> 7

Output: 1 3 5 7

Explaination: There is no even number. 
So ne need for modification.

Your Task:
You do not need to read input or print anything. Your task is to complete the function divide() which takes N and head of Link List as input 
parameters and returns the head of modified link list.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


Constraints:
1 = N = 100
1 = arr[i] = 10000 
*/

#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node* insert(Node *head,int data)
{
    Node *temp=new Node();
    temp->data=data;
    temp->next=NULL;
    Node *last=head;
    if(head==NULL)
    {
        head=temp;
        return head;
    }
    while(last->next!=NULL)
      last=last->next;
    last->next=temp; 
    return head;
}
void print(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n;
	    Node *odd=NULL,*even=NULL;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        if(x%2==0)
	            even=insert(even,x);
	        else
	            odd=insert(odd,x);
	    }
	    if(!even)
	       print(odd);
	    else{
	    Node *temp=even;
	    while(temp->next)
	        temp=temp->next;
	    temp->next=odd;
	    print(even);}
	}
	return 0;
}
