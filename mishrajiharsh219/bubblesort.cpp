#include <bits/stdc++.h>
using namespace std;
void bubble(int a[], int n)
{
    for (int itr = 0; itr <n-1; itr++)
    {
        for (int i = 0; i < n-itr-1; i++)
        {
            if(a[i]>a[i+1])
            swap(a[i],a[i+1]);
        }
        
    }
    
}
int main()
{
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubble(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }

    return 0;
}