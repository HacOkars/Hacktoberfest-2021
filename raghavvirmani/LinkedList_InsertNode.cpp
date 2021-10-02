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

Node* insertNode(Node* head,int pos)
{
	int data;
	cin>>data;
	Node *newNode = new Node(data);
	if(head==NULL)
	{
		head=newNode;
		return head;
	}
	else
	{
		Node *temp=head;
		while(pos>1 && temp!=NULL)
		{
			temp=temp->next;
			pos--;
		}
		
		if(temp==NULL)
		return head;
		
		newNode->next=temp->next;
		temp->next=newNode;
		
		return head;
	}
 } 
void printNode(Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}

int main()
{
	Node *head = takeInput();
	int pos;
	cin>>pos;
	head = insertNode(head,pos);
	printNode(head);
	return 0;
}
