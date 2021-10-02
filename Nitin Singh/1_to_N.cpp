#include<iostream>
using namespace std;

void printNos(int n)
{
    if(n==0)
    return;
    printNos(n-1);
    cout<<n<<" ";}

int main()
{
    int n;
    cin>>n;
    printNos(n);
}