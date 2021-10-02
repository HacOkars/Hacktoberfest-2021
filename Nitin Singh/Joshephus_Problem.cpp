#include<bits/stdc++.h>
using namespace std;

int myjos(int n, int k)
{
    if(n==1)
    return 0;
    return (myjos(n-1,k)+k)%n;
}

int jos(int n,int k)
{
    return myjos(n,k) + 1;
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<jos(n,k);
}