#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int c)
    {
        data = c;
        next = NULL;
    }
};

struct Queue
{
    node *head, *last; // Since this queue is based on linked list so there is no need to restrict the size.
    int size;
    Queue()
    {
        head = last = NULL;
        size=0;
    }
    void enqueue(int c)
    {
        size++;
        node *temp = new node(c);
        if (head == NULL)
        {
            head = last = temp;
        }
        else
        {
            last->next = temp;
            last=temp;
        }
    }
    void dequeue()
    {
        if(isEmpty()) return;
        size--;
        node *temp=head;
        head=head->next;
        delete(temp);
        if(head==NULL) last=NULL;
    }
    
    bool isEmpty()
    {
        return head==NULL;
    }
    int getFront()
    {
        if(isEmpty()) return -1;
        else return 0;
    }
    int getRear()
    {
        return size-1;
    }
    int getSize()
    {
        return size;
    }
    void display()
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<< " ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    Queue q;
    cout << q.isEmpty() << endl;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.display();
    cout << q.getRear() << endl;
    cout << q.getFront() << endl;
    q.enqueue(2);
    cout << q.getRear() << endl;
    cout << q.getFront() << endl;
    q.dequeue();
    cout << q.getRear() << endl;
    cout << q.getFront() << endl;
    q.dequeue();
    q.enqueue(8);
    q.enqueue(9);
    q.display();
    cout << q.getRear() << endl;
    cout << q.getFront() << endl;
    q.dequeue();
    q.dequeue();
    cout << q.getRear() << endl;
    cout << q.getFront() << endl;
}