#include <bits/stdc++.h>
//abshiek mishra
using namespace std;

int main()
{
  int n,r;

  cin>>n>>r;
  int ar[n];
  for(int i=0;i<n;i++)
  {
      cin>>ar[i];
  }

  int temp;
  while(r--)
  {
      temp=ar[0];
      for(int i=1;i<n;i++)
      {
          ar[i-1]=ar[i];
      }
      ar[n-1]=temp;
  }
  for(int i=0;i<n;i++)
  cout<<ar[i]<<" ";
	return 0;
}
