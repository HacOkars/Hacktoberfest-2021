// Note the fact that every prime number other than 2 and 3 can be writen as 6n-1 and 6n+1

#include<bits/stdc++.h>

using namespace std;

void naiveprime(int n)
{
    for (int i=2; i<n; i++)
    {
        if (n%i==0)
        {
            cout<<"Not Prime\n";
            return;
        }
    }
    cout<<"Is prime\n";
    return;

}

void efficient(int n)  // Every factor of a number exists in pairs, so we are checking for a factor which is less than sqrt of n and
                       // if we find a factor less than sqrt of n then there must be another factor y greater than sqrt of n.
                       // So we need to check only till sqrt of n and find the factor.
{
    for(int i=2; i*i<=n; i++)  // If for some value of i, i*i > n, then there will be no i which will be factor of n. 
    {                          // Time complexity of this operation is O(sqrt of n).
        if(n%i==0)
        {
            cout<<"Not Prime\n";
            return;
        }
    }
    cout<<"Is Prime\n";
    return;
}

bool morefficient(int n) // This method is 3 times faster than the efficient method, because we increase value of i by 6 and do two
{                        // divisibility checks, so overall it takes 1/3 times time taken by efficient method.
    if(n==2 || n==3) return true;
    if (n%2==0) return false;
    if (n%3==0) return false;

    for(int i=5; i*i<=n; i=i+6)
    {
        // cout<<"Checking divisibility with : "<<i<<" "<<i+2<<"\n";
        if(n%i==0 || n%(i+2)==0) return false;
    }
    return true;
}


int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n==1)
    {
        cout<<"Not primes\n";
        return 0;
    }
    naiveprime(n);
    efficient(n);
    if(morefficient(n))
    {
        cout<<"Is Prime\n";
    }
    else cout<<"Not Prime\n";
}