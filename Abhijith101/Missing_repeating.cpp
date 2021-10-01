//For questions where an array from 1 to n integers will be given, but a number will be replaced by a repeating digit, the user needs to find the missing number and repeating number.

#include<iostream>
using namespace std;
void missing(int a[], int n,int asum,int isum,int r)
{
  int m;
  m=asum-isum+r;
  cout<<"Missing Number"<<" "<<m;

}
int repeat(int a[], int n)
{int i,j;
 for(i=0;i<n;i++)
 {
     for(j=i+1;j<n;j++)
     {
         if(a[i]==a[j])
         {  
             cout<<"Repeating Number"<<" ";
            return a[j];

         }
     }
 }

}

int main()
{
    int n,i,asum=0,isum=0;
    int a[100];
    cout<<"Enter Size";
    cin>>n;
    cout<<"Enter Array";
    for(i=0;i<n;i++)
    {cin>>a[i];
     isum=isum+a[i];}
    asum=n*(n+1)/2;
    int r=repeat(a,n);
    cout<<r<<"\n";
    missing(a,n,asum,isum,r);
    return 0;





}