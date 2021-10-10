#include<iostream>
#include<string.h>
#define max 5
using namespace std;

class stack
{
    int top, stk[max];
    public:
            stack()
            {
                top = -1;
            }
            stack friend operator+(stack &s, int ele)
            {
                if(s.top == max-1)
                {
                    cout<<"Stack Overflow\n";
                    return s;
                }
                (s.top)++;
                s.stk[s.top] = ele;
                return s;
            }
            int friend operator--(stack &s, int)
            {
                if(s.top == -1)
                {
                    cout<<"Stack Underflow\n";
                    return -1;
                }
                int temp = s.stk[s.top];
                (s.top)--;
                return temp;
            }
            friend ostream& operator<<(ostream &o, stack &s)
            {
                if(s.top == -1)
                {
                    cout<<"Stack is empty\n";
                    return o;
                }
                else
                {
                    for(int i=0;i<=s.top;i++)
                    {
                        cout<<s.stk[i]<<"\n";
                    }
                    return o;
                }    
            }
};

int main()
{
    stack s;
    int n, choice, popped;
    char a[10];
    do
    {
        cout<<"Enter 1 to push\nEnter 2 to pop\nEnter 3 to display\n";
        cin>>choice;
        switch (choice)
        {
        case 1:
                cout<<"Enter the element to be pushed:\n";
                cin>>n;
                s = s+n;
                break;
        case 2:
                popped = s--;
                if(popped != -1)
                    cout<<popped<<" is popped from stack\n";
                break;
        case 3: cout<<s;
                break;
        default:
                cout<<"Invalid choice\n";
        }
        cout<<"Do you want to continue?(yes/no)\n";
        cin>>a;
    } while (!strcmp(a, "yes"));
    return 0;
}