#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
    if(n==2 || n==1)return 1;
        return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n);
}