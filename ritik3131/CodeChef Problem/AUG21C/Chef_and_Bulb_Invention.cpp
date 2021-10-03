#include<bits/stdc++.h>

using namespace std;
int main()
{
  int t;
  unsigned long long sum=0,k,p,n,mod;
  cin>>t;
  while(t--){
    sum=0;
    cin>>n>>p>>k;
    mod=p%k;
  if(mod==0)
  {
    sum=p/k+1;
  }
  else{
  sum=(n/k)*mod+(p/k);
    if((n%k)<mod)
     {
       if(n%k==0)
        sum+=1;
      else
       sum+=n%k;
     }
    else
      sum+=mod;
    if((n%k)!=0)
        sum+=1;
  }
  cout<<sum<<endl;
  }
}
