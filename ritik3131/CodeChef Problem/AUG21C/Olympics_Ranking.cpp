#include<bits/stdc++.h>

using namespace std;
int main()
{
  int t,a[3],b[3],i,sum1=0,sum2=0;
  cin>>t;
  while(t--){
    for(i=0;i<3;i++)
      {
        cin>>a[i];
        sum1+=a[i];
      }
      for(i=0;i<3;i++)
        {
          cin>>b[i];
          sum2+=b[i];
        }
        if(sum1>sum2)
          cout<<"1"<<endl;
        else
          cout<<"2"<<endl;
  }
}
