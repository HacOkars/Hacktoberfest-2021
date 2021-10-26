/* Insert in a Sorted List 

Easy Accuracy: 43.83% Submissions: 36078 Points: 2
Given a linked list sorted in ascending order and an integer called data, insert data in the linked list such that the list remains sorted.

Example 1:

Input:
LinkedList: 25->36->47->58->69->80
data: 19
Output: 19 25 36 47 58 69 80
Example 2:

Input:
LinkedList: 50->100
data: 75
Output: 50 75 100
Your Task:
The task is to complete the function sortedInsert() which should insert the element in sorted Linked List and return the head of the linked list

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 <= N <= 104
-99999 <= A[i] <= 99999, for each valid i */

#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;

    node(int x) {
        data = x;
        next = NULL;
    }
};

void sortedInsert(struct node **head_ref, int data);

node *last = nullptr;

void append(struct node **headRef, int newData) {
    struct node *new_node = new node(newData);

    if (*headRef == NULL) {
        *headRef = new_node;
        last = *headRef;
        return;
    }
    //    while (last->next != NULL)last = last->next;
    last->next = new_node;
    last = last->next;
}
void printList(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
}

/* Drier program to test count function*/
int main() {
    int test;
    cin >> test;
    while (test--) {
        struct node *head = NULL;
        int n, k;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> k;
            append(&head, k);
        }
        cin >> k;
        sortedInsert(&head, k);
        printList(head);
    }
    return 0;
}
// } Driver Code Ends
/*
structure of the node of the list is as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
};
*/
void sortedInsert(struct node** head, int x) 
{
    node *temp=new node(x);
    if(*head==NULL)
    {
       return;
    }
    else
    {
        if((*head)->data > x)
        {
            temp->next=*head;
            *head=temp;
        }
        else
        {
            node *prev=NULL;
            for(node *curr=*head;curr!=NULL;curr=curr->next)
            {
                if(curr->data>x)
                {
               prev->next=temp;
               temp->next=curr;
                break;
                }
                prev=curr;
            }
            if(prev->data <=x)
            {
                prev->next=temp;
            }

        }
    }
}
