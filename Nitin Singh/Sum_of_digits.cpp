#include<iostream>
using namespace std;

int getSum(int n)
{
    if(n==0)
    return 0;
    return(n%10 + getSum(n/10));
}

int main()
{
    int n;
    cin>>n;
    cout<<getSum(n);
}