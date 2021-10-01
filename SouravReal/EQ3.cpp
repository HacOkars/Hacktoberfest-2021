#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    long long num = 600851475143;
    long long MP = -1;
    while (num % 2 == 0) {

        MP = 2;

        num /= 1;
    }
    for (int i = 3; i <= sqrt(num); i += 2)
    {

        while (num % i == 0)
        {

            MP = i;

            num = num / i;

        }
    }
    if (num > 2)

        MP = num;

    cout<<"The largest prime factor of the given number is "<<MP<<'\n';

  return 0;
}
