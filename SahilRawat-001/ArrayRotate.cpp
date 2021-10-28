#include<iostream>
using namespace std;
int main(){
int arr[100],i ,n,k,j,temp;
cout<<"size of array  ";
cin>>n;
cout<<"  enter array value  ";
for(i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"  enter k rotation  ";
cin>>k;
for(j=0;j<k;j++){
temp=arr[n-1];
for(i=n-1;i>0;i--){
    arr[i]=arr[i-1];
}
arr[0]=temp;
}
for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}