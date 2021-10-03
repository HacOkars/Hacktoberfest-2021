#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int highest_mountain(vector<int> a){
    int n = a.size();

    int largest = 0;

    for(int i = 1; i <= n-2;){

        //check a[i] is peak or not
        if(a[i]>a[i-1] and a[i]>a[i+1]){
            //do some work
            int count = 1;
            int j = i;

            //count backwards
            while(j>=1 and a[j]>a[j-1]){
                j--;
                count++;
            }


            //count forward
            while(i<=n-2 and a[i]>a[i+1]){
                i++;
                count++;
            }
            largest = max(largest,count);

        }
        else{
            i++;
        }
    }
    return largest;
}

int main(){

    // My Appraoch
    /*
    int a[16] = {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    int len = INT_MIN;

    //The first and last number cannot be peak so skipping those
    for(int i = 1; i < (sizeof(a)/sizeof(int))-1; ++i){
        int height = 1;
        if((a[i]>a[i-1])&&(a[i]>a[i+1])){
            for(int j= i-1; a[j]<a[j+1];--j){
                height++;
            }
            for(int j= i+1; a[j]>a[j+1];++j){
                height++;
            }
            height++;
        }
        if(height>len)
            len = height;
    }
    cout<<len<<endl;

    */

    // Sir approach
    vector<int> arr{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};

    cout<<highest_mountain(arr);

    return 0;
}