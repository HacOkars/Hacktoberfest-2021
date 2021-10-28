#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
        int num=0;
    for(i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            num=1;
        }
        else{
            num=0;
            break;
        }
    }
    if(num==0){
        cout<<"not sorted";
    }
    else 
    cout<<"sorted";
}