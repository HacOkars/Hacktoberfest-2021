#include<iostream>
using namespace std;

int countDigits(double n)
{
    
    if(n==0)
    return 1;
    if(n<1)
    return 0;
    return(1+countDigits(n/10));
}
int main()
{
    int n;
    cin>>n;
    cout<<countDigits(n);
}