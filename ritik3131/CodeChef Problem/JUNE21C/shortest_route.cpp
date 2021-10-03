#include<bits/stdc++.h>

using namespace std;
int a[100001],b[100001],ans[100001];
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n,m,i,j,k;
  cin>>t;
//  long long ans;
  for(i=0;i<t;i++)
  {
    int max1=0,max2=0;
    cin>>n>>m;
    for(j=0;j<n;j++)
     cin>>a[j];
    for(j=0;j<m;j++)
     {
       cin>>b[j];
       if(a[b[j]-1]!=0)
         {
           ans[j]=0;
          // continue;
         }
        else{
             max1=0,max2=0;
             for(k=b[j]-1;k>=0;k--)
              {
               if(a[k]==1)
                {
                 max1=b[j]-k-1;
                 break;
                }
               }
               if(max1==1)
               {
                 ans[j]=1;
               }
               else
                 {
                  for(k=b[j]-1;k<n;k++)
                   {
                    if(a[k]==2)
                     {
                      max2=k-b[j]+1;
                      break;
                     }
                    }
                   if(max2==1)
                    {
                      ans[j]=1;
                     }
                   else if(max1==0&&max2!=0)
                         ans[j]=max2;
                         else if(max2==0&&max1!=0)
                              ans[j]=max1;
                              else if(max1==0&&max2==0)
                                   ans[j]=-1;
                                   else if(max1>max2)
                                          ans[j]=max2;
                                        else if(max1<max2)
                                               ans[j]=max1;

     }
   }
   }
     for(j=0;j<m;j++)
      cout<<ans[j]<<" ";
    cout<<endl;
  }
  return 0;
}
