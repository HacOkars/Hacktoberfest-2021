#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define f1(a,b) for(int i=a;i<b;i++)
#define f2(a,b) for(int i=a;i>b;i--)
void boost(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);}
int main(){
ll t,n,l,r;
cin>>t;
while(t--){

/*cin>>n;
ll a[n+1];
for(int i=0;i<n;i++){
cin>>a[i];
}*/
  cin>>l>>r;
  cout<<(r)/3-(l-1)/3<<endl;
}
return 0;
}
