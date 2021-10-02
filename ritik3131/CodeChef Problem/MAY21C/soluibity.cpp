#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t,x,a,b,i,ans;
  cin>>t;
  for(int i=0;i<t;i++)
    {
      cin>>x>>a>>b;
      ans=((100-x)*b+a)*10;
      cout<<ans<<endl;
    }
}
