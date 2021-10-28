#include<iostream>
using namespace std;

int main(){
     int n;
     cout<<"limit array";
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }int dec;
    int start=0;
int min=arr[0];
     for(i=0;i<n;i++){
        if(arr[i]<min ){
         min=arr[i] ;
         dec=i;
     
        }
      
    
        }
         cout<<min<< " "<< dec;
         int max=arr[0];
     for(i=dec;i<n;i++){
        if(arr[i]>min ){
         max=arr[i] ;
        }
     
        }
        cout<<" max is here " <<max;

cout<<" profit "<< max-min;
}