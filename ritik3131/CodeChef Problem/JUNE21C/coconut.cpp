#include<bits/stdc++.h>

using namespace std;

int main()
{
  int i,t,xa,xy,Xa,Xy,sum;
  cin>>t;
  for(i=0;i<t;i++)
  {
      cin>>xa>>xy>>Xa>>Xy;
      sum=Xa/xa + Xy/xy;
      cout<<sum<<endl;
  }    
}
