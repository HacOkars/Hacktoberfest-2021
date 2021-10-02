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
 
int FindNode(Node* head)
{
	int data;
	cin>>data;
	int pos=0;
	if(head==NULL)
	{
		return -1;
	}
	else
	{
		Node *temp=head;
		while(temp->data!=data && temp!=NULL)
		{
			temp=temp->next;
			pos++;
		}
		
		if(temp->data==data)
		return pos;
		
		if(temp==NULL)
		return -1;
	}
 }
int main()
{
	int t;
	cin>>t;
	int arr[t];
	for(int i=0;i<t;++i)
	{
	Node *head = takeInput();
	arr[i]=FindNode(head);
	delete head;
	}
	for(int i=0;i<t;++i)
	{
	cout<<arr[i]<<endl;
	}
	
	return 0;
}
