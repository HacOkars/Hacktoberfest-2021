#include<bits/stdc++.h>

using namespace std;

bool outOfOrder(vector<int> arr, int i){
    int x = arr[i];
    if(i==0){
        return x > arr[1];
    }
    if(i==arr.size()-1)
        return x < arr[i-1];

    return x > arr[i+1] or x < arr[i-1];
} 

pair<int,int> subarraySort(vector<int> arr){

    //O(nlogn) appraoch
    /*
    vector<int> b(arr);
    sort(b.begin(), b.end());
    
    int i = 0, j = arr.size()-1;

    while(i < arr.size() and arr[i] == b[i])
        i++;
    
    while(j>0 and arr[j] == b[j])
        j--;

    if(i == arr.size()-1)
        return {-1,-1};
    else
        return {i,j};
        */
    
    // Video O(n) appraoch
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i = 0; i < arr.size(); ++i){
        int x = arr[i];
        if(outOfOrder(arr, i)){
            smallest = min(smallest, x);
            largest = max(largest, x);

        }
    }

    if(smallest == INT_MAX){
        return {-1, -1};
    }
    
    int left = 0;
    while(smallest >= arr[left]){
        left++;
    }
    int right = arr.size()-1;
    while(largest <= arr[right]){
        right--;
    }
    return {left,right};
}

int main(){
    vector<int> arr = {1,2,3,4,5,8,6,7,9,10,11};
    
    auto p = subarraySort(arr);
    cout<<p.first<<" and "<<p.second<<endl;

}