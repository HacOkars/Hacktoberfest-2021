#include<bits/stdc++.h>

using namespace std;
int main()
{
  int t,n,i,j=0,k;
  cin>>t;
  while(t--){
  cin>>n;
  unsigned long long count=0;
  for(k=1;k<=n/2;k++)
  {
   for(i=k;i<=n;i+=k)
     {
       for(j=k*2;j<=n;j+=k)
        {
          if(i%j==k)
            {
              count++;
            }
        }
     }
  }
  cout<<count<<endl;
  }
}
