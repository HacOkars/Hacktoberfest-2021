#include<iostream>
using namespace std;

class Node
{
	public :
		int data;
		Node *next;
		
	Node(int data)
	{
		this -> data = data;
		next =  NULL;
	}
};

Node* takeInput()
{
	int data;
	cin>>data;
	Node *head = NULL;
	Node *tail= head;
	while(data!=-1)
	{
		Node *newNode = new Node(data);
		if(head==NULL)
		{
			head=newNode;
			tail= head;
		}
		
		else
		{
		tail->next=newNode;
		newNode->next= NULL;
		tail=tail->next;
		}
	cin>>data;
	}
	return head;
}
 
int findNode(Node *head,int n,int i)
{
	if(head==NULL)
	return -1;
	
	if(head->data==n)
	return i;
	else
	{
		head=head->next;
		findNode(head,n,++i);	
	}
}

int main()
{
	Node *head = takeInput();
	int n;
	cin>>n;
	cout<<findNode(head,n,0);
	return 0;
}
