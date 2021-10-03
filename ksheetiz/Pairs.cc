#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[] = {10, 5, 2, 3, -6, 9 ,11};
    int target = 4;
    //Brute Force Algorithm O(n^2) Time Complexity
    /*
    int target = 4, i, j, flag = 1;
    for(i = 0; i < (sizeof(a)/sizeof(int)); ++i){
        for(j = i+1; j < (sizeof(a)/sizeof(int)); ++j){
            if((a[i] + a[j]) == target){
                break;
                flag = 0; 
            }
        }
        if(flag)
            break;
    }
    cout<<"("<<i+1<<","<<j+1<<").";
    */

    //Optimised Algorithm O(n) Time Complexity
    unordered_set <int> st;
    int i = 0, b;
    for(i = 0; i <(sizeof(a)/sizeof(int)); ++i){
        b = target - (a[i]);
        if(st.find(b) == st.end())
            st.insert(a[i]);
        else
            break;
    }
    cout<<"("<<a[i]<<","<<b<<")";
}