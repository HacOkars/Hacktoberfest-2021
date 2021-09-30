#include <iostream>
#include <queue>
using namespace std;

struct node
{
    int data;
    node *left, *right;
    node(int c)
    {
        data = c;
        left = right = NULL;
    }
};

node *maketree(node *root)
{
    int data;
    cout << "Enter the data: ";
    cin >> data;
    cout << endl;
    if (data == 0)
    {
        return NULL;
    }

    root = new node(data);
    cout << "Enter the left child of " << root->data << ".\n   ";
    root->left = maketree(root->left);
    cout << "Enter the right child of " << root->data << ".\n  ";
    root->right = maketree(root->right);

    return root;
}
int sizeoftree(node *root) // Uisng normal node traversal
{
    if(root==NULL) return 0;
    queue<node *> q;
    int count=0;
    q.push(root);
        while (q.empty() == false)
        {
            node *curr = q.front();
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
            q.pop();
            count++;
        }
    return count;
}
int getsize(node *root)
{
    if (root==NULL) return 0;
    else
    {
        return 1+ getsize(root->left) + getsize(root->right);
    }
}
int widthoftree(node *root)
{
    if(root==NULL) return 0;
    int maxwidth=0;
    queue <node *> q;
    q.push(root);
    while(q.empty()==false)
    {
        int count=q.size();
        maxwidth=max(maxwidth, count);
        while(count--)
        {
            node *temp=q.front();
            q.pop();
            if(temp->left!=NULL) q.push(temp->left);
            if(temp->right!=NULL) q.push(temp->right);
        }
    }
    return maxwidth;
}
int main()
{
    // Size of tree means number of nodes in the tree.
    node *root=NULL;
    root=maketree(root);
    cout<<sizeoftree(root)<<endl;
    cout<<getsize(root)<<endl;
    cout<<widthoftree(root)<<endl;
}