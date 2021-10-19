#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sol=0;
    int a,b,c;
    for (int i = 0; i < n; i++)
    {
       cin>>a>>b>>c;
       if ((a==1&b==1) ||(b==1&c==1) || (c==1&a==1))
       {
           sol++;
       }else;
       
    }
    cout<<sol;
    return 0;
}