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

bool CheckPalindrome(Node *head1,Node *head2)
{
	
	
			while(head1!=NULL)
		{
			if(head1->data!=head2->data)
			return false;
			
			head1=head1->next;
			head2=head2->next;
		}
		return true;
	
}
int main()
{	int i;
	Node *head1 = takeInput();
	if(head1==NULL)
	cout<<"true";
	return 0;
	
	Node *head2 = CopyList(head1);
	head2 = ReverseList(head2);
	i = CheckPalindrome(head1, head2);
	if(i==1)
	cout<<"true";
	else 
	cout<<"false";
	return 0;
}
