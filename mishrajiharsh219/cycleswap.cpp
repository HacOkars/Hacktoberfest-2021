#include <bits/stdc++.h>
using namespace std;
void cyclicswap(int*n1,int*n2,int*n3){
int temp=*n1;
*n1=*n3;
*n3=*n2;
*n2=temp;
}
int main()
{
    int a, b, c;
    cout << "give numbers";
    cin >> a >> b >> c;
    cyclicswap(&a,&b,&c);
    cout<<a<<b<<c;
    return 0;
}
