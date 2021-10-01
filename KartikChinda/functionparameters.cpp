#include <iostream>

using namespace std;

void SUM(int a, int b = 10, int c = 20)
{
    int sum = a + b + c;
    cout << sum << endl;
}

int main()
{
    SUM(12, 23, 45);
    SUM(12, 23);
    SUM(12);
    return 0;
}