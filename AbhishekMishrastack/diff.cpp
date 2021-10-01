#include <bits/stdc++.h>
# define ll long long int
using namespace std;
bool check(ll ar[],ll mid,ll cows ,ll n)
{
    ll count=1;
    ll temp=ar[0];
    for(int i=1;i<n;i++)
    {
        if(ar[i]-temp >=mid)
        {
            temp=ar[i];
            count++;
        }
        if(count==cows)
         return true;
    }
    
    return false;
    
}
int main() 
{
  ll t;
  cin>>t;
  while(t--)
  {
      ll stalls,cows;
      cin>>stalls>>cows;
      ll ar[stalls];
      for(int i=0;i<stalls;i++)
      {
          cin>>ar[i];
      }
       sort(ar , ar + stalls);
      ll low=0;
      ll high=ar[stalls-1] - ar[0];
     
      ll ans=-1;
      while(low<=high)
      {
          ll mid=low+(high - low) /2;
          if(check(ar,mid,cows,stalls))
          {
             if(ans < mid)
              {
              ans=mid;
              low=mid+1;
               }
          }
          else
          high=mid-1;
      }
      cout<<ans<<endl;
  }
	return 0;
}
