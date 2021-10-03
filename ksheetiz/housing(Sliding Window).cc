#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void housing(int *arr, int n, int k){
    int i = 0;
    int j = 0;
    int cs = 0;

    while(j<n){
        //expand to right
        cs += arr[j];
        j++;

        //remove element from the left till the cs > k and i<j
        while(cs > k and i < j){
            cs = cs - arr[i];
            i++;
        }
        //check if any given point
        if(cs == k){
            cout<<i<<" - "<<j-1<<endl;
        }
    }
}


void smallestWindow(int *arr, int n, int k){
    int i = 0;
    int j = 0;
    int cs = 0;
    int si = 0;
    int sj = 0; int length = INT_MAX;
    
    while(j<n){

        cs += arr[j];
        j++;
        
        while(cs > k and i < j){
            cs -=arr[i];
            i++;
        }
        if(cs==k and length > j-i-1){
            length = j-i-1;
            si = i; sj= j-1;
        }
    }
    cout<<"Smallest Window = "<<si<<" - "<<sj;
}
int main(){

    int plots[] = {1,3,2,1,4,1,3,2,1,1};
    int n = sizeof(plots)/sizeof(int);
    int k = 8;

    housing(plots,n,k);
    smallestWindow(plots,n,k);

    return 0;
}