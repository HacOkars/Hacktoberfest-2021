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
 
void printNode(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}

Node * OddEven(Node *head)
{
	if(head==NULL || head->next==NULL)
	return head;
	
	Node *evenhead = head;
	Node *eventail = head;
	Node *oddhead = head;
	Node *oddtail = head;

	
	while(oddtail->data%2==0 && oddtail!=NULL )
	{
		oddtail=oddtail->next;
	}
	
	if(oddtail==NULL)
	return evenhead;
	else
	oddhead=oddtail;

	while(eventail->data%2!=0 && eventail!=NULL)
	{
		eventail=eventail->next;
	}
	if(eventail==NULL)
	return oddhead;
	else
	evenhead=eventail;
	
	while(oddtail!=NULL && eventail!=NULL)
	{
		
		while(oddtail->next->data%2!=0)
		{
			oddtail=oddtail->next;
		}
		
		while(eventail->next->data%2==0)
		{
			eventail=eventail->next;
		}	
		
		if(eventail->next==NULL)
		return oddhead;
		
		oddtail->next=eventail->next;
		eventail->next=eventail->next->next;
		oddtail->next->next==evenhead;
		
		oddtail=oddtail->next;
		
		
	}
	
	return oddhead;
	
}

int main()
{
	Node *head = takeInput();
	head = OddEven(head);
	printNode(head);
	return 0;
}
