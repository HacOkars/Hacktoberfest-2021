#include<iostream>
using namespace std;

int main()
{
	for(int i=1;i<=100;i++){
		if(i%3==0 && i%5==0) cout<<"fizzbuzz ";
		else if(i%3==0) cout<<"fizz ";
		else if(i%5==0) cout<<"buzz ";
		else cout<<i<<ends;
	}
	
}
