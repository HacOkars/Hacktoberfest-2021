#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    // fastio;
    int n;
    cin>>n;
    int low=0,mid,high=0,key;
    int a[1000];
    for (int i = 0; i <n; i++)
    {
      cin>>a[i];
    }
    high=n-1;
    cout<<"enter key";
    cin>>key;
    while(low<=high){
      mid=((low+high)/2);
      if(key==a[mid])
      {cout<<"found"<<mid;
       break;}
      else if(key<mid)
      high=mid-1;
      else 
      low=mid+1;
    }
    return 0;
}