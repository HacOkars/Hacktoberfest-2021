#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t,x,n,k,i;
  cin>>t;
  for(int i=0;i<t;i++)
    {
      cin>>n>>x>>k;
      if((n+1-x)%k==0||x%k==0)
       cout<<"Yes"<<endl;
      else
        cout<<"No"<<endl;
    }
}
