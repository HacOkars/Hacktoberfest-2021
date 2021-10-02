#include<iostream>
#include<math.h>
using namespace std;

long prime(long ) ;


int main()
{  long n;
   long i, j =2000000 ;
   long s= 0;
   for(i=2;i<j;i++)
   {
       n = prime(i) ;
       s+=n;
   }
  cout<<"The sum= "<<s<<'\n' ;

}
long prime(long i)
{
     long n, c=0 ;
     for(n=1;n<=sqrt(i);n++)
     {
          if(i%n==0)
            c++ ;
     }
     if (c==1)
        return i ;
     else
        return 0;
}
