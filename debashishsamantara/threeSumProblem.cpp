//Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int target = 0;
    vector<int> a(n);
    for(auto &i : a)
        cin >> i;
    bool found = false;
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        int lo = i + 1, hi = n - 1;
        while(lo < hi){
            int current = a[i] + a[lo] + a[hi];
            if(current == target)
                found = true;
            if(current < target)
                lo++;
            else
                hi--;
        }
    }
    if(found)
        cout << "true";
    else
        cout << "false";
    return 0;
}