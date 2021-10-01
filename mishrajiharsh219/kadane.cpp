#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    
    cin >> n;
    int currsum=0;
    int maxsum=INT_MIN;

    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
   for (int i = 0; i < n; i++)
   {
       currsum=currsum+a[i];
       maxsum=max(currsum,maxsum);
   }
   cout<<maxsum;
    return 0;
}