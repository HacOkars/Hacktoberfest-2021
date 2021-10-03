#include<bits/stdc++.h>

using namespace std;
const unsigned int M = 1000000007;

  unsigned long long power(unsigned long long x,int y)
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

unsigned long long power_of(unsigned long long x,int y)
{
    int res = 1;     // Initialize result

    x = x % M; // Update x if it is more than or
                // equal to p

    if (x == 0) return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % M;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % M;
    }
    return res;
}

int main()
{
  int t,n,m,i;
  cin>>t;
  unsigned long long c,ans;
  for(i=0;i<t;i++)
  {
    cin>>n>>m;
    c=(power(2,n)-1)%M;
    ans=power_of(c,m)%M;
    cout<<ans<<endl;
  }
}
