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
 
Node * ReverseList(Node* head)
{

	if(head==NULL || head->next==NULL)
	{
		return head;
	}
	else
	{
		
		Node *temp1=head;
		Node *temp2=head->next;
		Node *temp3=temp2->next;
		head->next=NULL;
		while(temp3!=NULL)
		{
			temp2->next=temp1;
			temp1=temp2;
			temp2=temp3;
			temp3=temp3->next;
		}
	temp2->next=temp1;
	return temp2;
		
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
	head = ReverseList(head);
	printNode(head);
	delete head;
	return 0;
}
