/*
Arrange Consonants and Vowels 

Easy Accuracy: 41.87% Submissions: 6509 Points: 2
Given a singly linked list of size N containing only English Alphabets. Your task is to complete the function arrangeC&V(), that arranges the 
consonants and vowel nodes of the list it in such a way that all the vowels nodes come before the consonants while maintaining the order of their 
arrival.

Input:
The function takes a single argument as input, the reference pointer to the head of the linked list. There will be T test cases and for each test 
case the function will be called separately.

Output:
For each test case output a single line containing space separated elements of the list.

User Task:
The task is to complete the function arrange() which should arrange the vowels and consonants as required.

Constraints:
1 <= T <= 100
1 <= N <= 100

Example:
Input:
2
6
a e g h i m
3
q r t

Output:
a e i g h m
q r t

Explanation:
Testcase 1: Vowels like a, e and i are in the front, and consonants like g, h and m are at the end of the list.
 
*/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

// task is to complete this function
struct Node* arrange(Node *head);

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        head = arrange(head);
        printlist(head);
    }
	return 0;
}

// } Driver Code Ends

bool isVowel(char c){
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
return true;
return false;
}
struct Node* arrange(Node *head)
{
if(!head||!head->next) return head;
Node* v,*c,*ve=NULL,*ce=NULL;
while(head){
if(isVowel(head->data)){
if(ve==NULL)
v=ve=head;
else{
ve->next=head;
ve=head;
}
}
else{
if(ce==NULL)
c=ce=head;
else{
ce->next=head;
ce=head;
}
}
head=head->next;
}
ce->next=NULL;
if(!ve)
return c;
ve->next=c;
return v;
}



