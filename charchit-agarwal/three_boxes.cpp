#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int n=1;
    int temp=d;
    d=d-a;
    if (d>=b)
    {d=d-b;}else{
         n++;
        d=temp-b;
    }
    if (d>=c)
    {d=d-c;}
    else{
         n++;
        d=temp;
    }
    cout<<n<<endl;
    }
    return 0;
}