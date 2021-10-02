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

Node* CopyList(Node *head1)
{
	Node *head = NULL;
	Node *newNode = new Node(head1->data);
	head1=head1->next;
	head=newNode;
	Node *tail= head;
	
	while(head1!=NULL)
	{
		Node *newNode = new Node(head1->data);
		tail->next=newNode;
		newNode->next= NULL;
		tail=tail->next;
		head1=head1->next;
	}
	return head;
}

int main()
{
	Node *head1 = takeInput();
	Node *head2 = CopyList(head1);
	printNode(head1);
	printNode(head2);
	return 0;
}
