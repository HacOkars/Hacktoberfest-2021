#include<iostream>

using namespace std;

int cutrope(int len, int &a, int &b, int &c)
{
    if(len<0) return -1;
    if(len==0) return 0;
    int x=max(cutrope(len-a,a,b,c),max(cutrope(len-b,a,b,c),cutrope(len-c,a,b,c)));

    if(x==-1)
    {
        return -1;
    }
    else
    {
        return x+1;
    }

}

int main()
{
    int len, a,b,c;
    cin>>len>>a>>b>>c;
    cout<<cutrope(len, a, b, c);
}