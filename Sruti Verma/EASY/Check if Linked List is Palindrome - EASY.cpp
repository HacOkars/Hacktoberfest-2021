/* Check if Linked List is Palindrome 

Easy Accuracy: 39.25% Submissions: 100k+ Points: 2
Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

Example 1:

Input:
N = 3
value[] = {1,2,1}
Output: 1
Explanation: The given linked list is
1 2 1 , which is a palindrome and
Hence, the output is 1.
Example 2:

Input:
N = 4
value[] = {1,2,3,4}
Output: 0
Explanation: The given linked list
is 1 2 3 4 , which is not a palindrome
and Hence, the output is 0.
Your Task:
The task is to complete the function isPalindrome() which takes head as reference as the only parameter and returns true or false if linked list is palindrome or not respectively.

Expected Time Complexity: O(N)
Expected Auxialliary Space Usage: O(1)  (ie, you should not use the recursive stack space as well)

Constraints:
1 <= N <= 105 */


#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

 // } Driver Code Ends


class Solution{
public:
//Function to check whether the list is palindrome.
bool isPalindrome(Node *head)
{
Node *slow = head, *fast = head;
while(fast && fast -> next)
{
slow = slow -> next;
fast = fast -> next -> next;
}
// if no of nodes is odd
// then fast -> next must be null
if(fast)
{
Node *p = head, *q = reverse(slow);
while(q -> next)
{
if(p -> data != q -> data)
return false;
p = p -> next;
q = q -> next;
}
return true;
}
Node *p = head, *q = reverse(slow);
while(q)
{
if(p -> data != q -> data)
return false;
p = p -> next;
q = q -> next;
}
return true;
}

Node* reverse(Node *head)
{
Node *prev = NULL, *curr = head, *next;
while(curr)
{
next = curr -> next;
curr -> next = prev;
prev = curr;
curr = next;
}
return prev;
}
};

// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code Ends

