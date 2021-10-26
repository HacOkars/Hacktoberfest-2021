#include<iostream>
using namespace std;

int main()
{
	int A[100];
	int n;
	cout<<"Enter length of array: ";
	cin>>n;
	cout<<"Enter elements:"<<endl;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	
	//min element
	int min=A[0];
	for(int j=0;j<n;j++)
	{
		if(A[j]<=min) min=A[j];
	}
	cout<<"Min element is: "<<min<<endl;
	
	//max element
	int max=A[0];
	for(int k=0;k<n;k++)
	{
		if(A[k]>=max) max=A[k];
	}
	cout<<"Max element is: "<<max<<endl;
}
