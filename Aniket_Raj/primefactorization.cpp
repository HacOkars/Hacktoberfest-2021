#include <bits/stdc++.h>

using namespace std;

bool isprime(int n)
{
    if (n == 2 || n == 3)
        return true;

    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
void precompute(vector<int> &arr, int n)
{
    int i = 1;
    arr.push_back(2);
    arr.push_back(3);
    for (i; i <= (n / 6 + 1); i++)
    {
        if (isprime(6 * i - 1))
        {
            arr.push_back(6 * i - 1);
        }
        if (isprime(6 * i + 1))
        {
            arr.push_back(6 * i + 1);
        }
    }
}
void primefactors(int n)  // This function will run theta of sqrt of n, which is worst case for n being a prime. In other cases,
{                         // n is divided by the prime numbers which reduces n drastically so this does not take that long.
    if (n % 2 == 0)
    {
        while (n % 2 == 0)
        {
            cout << 2 << " ";
            n = n / 2;
        }
    }
    if (n % 3 == 0)
    {
        while (n % 3 == 0)
        {
            cout << 3 << " ";
            n = n / 3;
        }
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
        while (n % (i + 2) == 0)
        {
            cout << i + 2 << " ";
            n = n / (i + 2);
        }
    }
    if (n > 3)
        cout << n << endl;
}

int main()
{
    int n;
    cin >> n;

    // ************Precomputations method: -*****************

    // vector <int> arr;
    // precompute(arr,n);
    // int i=0;
    // while(n!=1)
    // {
    //     while(n%arr[i]==0)
    //     {
    //         cout<<arr[i]<<" ";
    //         n=n/arr[i];
    //     }
    //     i++;
    // }
    // cout<<endl;
    // return 0;

    primefactors(n);
}