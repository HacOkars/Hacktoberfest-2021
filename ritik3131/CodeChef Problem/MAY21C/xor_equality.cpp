#include<bits/stdc++.h>
using namespace std;

const unsigned int M = 1000000007;

long long power(int x,int y)
{
    long long temp;
    if( y == 0)
        return 1;
    temp = (power(x, y / 2))%M;
    if (y % 2 == 0)
        return (temp * temp)%M;
    else
        return (x * temp * temp)%M;
}

int main()
{
  int t,n,i;
  long long c;
  //long long power;
  cin>>t;
  for(i=0;i<t;i++)
    {
      c=1;
      cin>>n;
      /*if(n==0)
       c=1;
      else if(n<63)
            {c=(power)%M;
              power=1<<(n-1);cout<<power<<" "<<c<<endl;}
           else
          {
           c=(1<<x)%M;*/
        //  cout<<(c)<<endl;
     c=power(2,n-1);
     cout<<c<<endl;
    }
}
