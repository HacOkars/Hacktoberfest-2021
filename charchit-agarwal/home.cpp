#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int i;
    for ( i = 0; a!=1; i++)
    {
        if (a%2==0)
        {
            a=a/2;
        }
        else a=3*a+1;
    }
    cout<<i;
    return 0;
}
