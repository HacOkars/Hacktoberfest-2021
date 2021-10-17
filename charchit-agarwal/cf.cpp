#include<iostream>
#include<string.h>

using namespace std;
int main()
{
     int test;
	 cout<<"enter";
     cin>>test;
     string str;
     for(int i=0;i<test;i++){ 
	     cin>>str;
	     if(str.size()<=10){
	         cout<<str<<endl;
	     }
	     else{
	         cout<<str[0]<<str.size()-2<<str[str.size()-1]<<endl;
	     }
	 }
    return 0;
}
