#include<bits/stdc++.h>

using namespace std;

int main()
{
  long d,da,p,q,n,t,i,rem;
  unsigned long long sum=0,add;
  cin>>t;
  for(i=0;i<t;i++)
  {
    cin>>da>>d>>p>>q;
    if(da>d)
     {
      n=(da-d)/d;
      add=n*(n+1)/2;
      rem=da%d;
      sum=p*da + d*q*add + rem*q*(n+1);
     }
     else
      sum=p*da;
    cout<<sum<<endl;
  }
}
