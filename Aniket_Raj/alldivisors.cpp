#include<bits/stdc++.h>

using namespace std;

void naive(int n)  // This takes theta(n) time complexity and theta(1) space complexity.
{
    for (int i=1; i<=n; i++)
    {
        if(!(n%i))
        {
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}

void efficient(int n) // This take O(sqrt of n) time and theta(1) space to complete the task, but answer printed is not in sorted order
{
    for(int i=1; i*i<=n; i++)
    {
        if(!(n%i))
        {
            cout<<i<<" ";
            if(i!=n/i) cout<<n/i<<" ";  // This condition is required to avoid double printing of a divisor if number given is
            // perfect square.
        }
    }
    cout<<"\n";
}

void effsort(int n, int k) // This function recursively prints the divisors ,and runs only theta(sqrt of n) times, print them in sorted
                           // order.
{
    if(k*k<=n)
    {
        // cout<<"this is k: "<<k<<endl;
        if(n%k==0)
        {
            cout<<k<<" ";     
        }
        effsort(n, k+1);
        if(n%k==0 && k!=n/k)
        {
            cout<<n/k<<" ";
        }

    }
}

int main()
{
    int n; cin>>n;
    naive(n);
    efficient(n);
    effsort(n,1);
    
}