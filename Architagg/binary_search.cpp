#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> &v, int n, int val){
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(v[mid]==val)
        return mid;
        else if(v[mid]>val)
        high-=1;
        else
        low+=1;
    }
    return -1;
}

int main(){
    vector<int> v = {2,3,4,55,68,83,90};
    int n = v.size();
    int val;
    cout<<"Enter the number to search: "<<endl;
    cin>>val;
    int check = binarysearch(v, n, val);
    if(check!=-1){
        cout<<"Number found at index: "<<check<<endl;
    }
    else
        cout<<"Number not found!!"<<endl;
    return 0;
}