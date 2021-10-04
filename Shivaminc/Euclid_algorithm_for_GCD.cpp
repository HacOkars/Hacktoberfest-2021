#include <iostream>
using namespace std;

int gcd(int a, int b){
    while(b != 0){
        int rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

int main(int argc, const char * argv[]) {
    int a, b;
    cout<<"Enter two numbers to find the GCD of:"<<endl;
    cin>>a>>b;
    cout<<gcd(a, b)<<endl;
    return 0;
}