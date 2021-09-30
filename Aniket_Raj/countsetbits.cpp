#include<iostream>

using namespace std;

int main()
{
    int n,temp;
    cout<<"Enter the number: ";
    cin>>n;
    temp=n;

    // Using normal approach:  Time complexity of this approach is order of Theta(position of the last set bit)
    int count=0;
    while(n!=0)
    {
        if(n&1) 
        {
            count++;
        }
        n=n>>1;
    }
    cout<<"using normal approach "<< count<<endl;

    n=temp;
    // Using Brian kernighan's approach. Time complexity of this approach is Theta(number of set bits present in the number)
    count=0;
    while(n!=0)
    {
        n=n&(n-1);
        count++;
    }
    cout<<"Using BK : "<<count<<endl;

}