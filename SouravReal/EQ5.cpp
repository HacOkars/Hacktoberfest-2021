#include <iostream>
using namespace std;

int HCF(int a, int b)
{   int temp ;
    if (a>b)
    {
        temp=a ;
        a=b;
        b=temp;
    }
    if(b%a==0)
        return a;
    else
        return HCF(b % a, a);
}


int main()
{
    long long lcm = 1, hcf ;
    int i;

    for(i = 2; i <= 20; i++)
    {
        hcf = HCF(lcm, i);
        lcm = (lcm * i) / hcf;
    }

    cout<<"The smallest no. divisible by all the no. from 1-20 is: "<<lcm;
    return 0;
}
