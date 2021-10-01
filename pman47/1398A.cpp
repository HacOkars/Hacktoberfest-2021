# link https://codeforces.com/contest/1398/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        i=0;
        j=1;
        k=n-1;
        if(a[i]+a[j]<=a[k])cout<<i+1<<" "<<j+1<<" "<<k+1<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}
