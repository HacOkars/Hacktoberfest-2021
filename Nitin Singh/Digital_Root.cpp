#include<iostream>
using namespace std;

int digitalRoot(int n)
{
        while(n>9)
        {n=n%10+digitalRoot(n/10);}
        return n;
}
    
int main()
{
    int n;
    cin>>n;
    cout<<digitalRoot(n);
}    