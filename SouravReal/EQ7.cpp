#include <iostream>
#include<math.h>

using namespace std;

long checkprime(long PN)
{
    long i=1,c=0;

     for(i=1;i<=sqrt(PN);i++)
        {if(PN%i==0)
        {c++ ;}   }
    if(c==1)
        return 1;
     else
        return 0;
}
int main()
{
   long pn=1 ;
   int n=0, PN;

    while(n<=10001)
        { PN= checkprime(pn) ;
         if(PN!=1)
           { pn++; }
         else
            {
            pn++ ;
            n++ ;  }
        }
    cout<<"The 10001st prime number is "<<pn-1<<'\n' ;

    return 0;
}
