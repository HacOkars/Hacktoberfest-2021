#include<iostream>
#include<vector>

using namespace std;

//Helper Method
void merge(vector<int> &array, int s, int e){
    int i = s;
    int m = (s+e)/2;
    int j = m + 1;

    vector<int> temp;
    while(i<=m and j<=e){
        if(array[i] < array[j]){
            temp.push_back(array[i]);
            i++;
        }
        else{
            temp.push_back(array[j]);
            j++;
        }
    }
    //copy remaining element from first array
    while(i<=m){
        temp.push_back(array[i++]);
    }

    //copy remaining element from second array
    while(j<=e){
        temp.push_back(array[j++]);
    }

    //copy back the element from temp to original array
    int k = 0;
    for(int idx = s; idx <= e; ++idx){
        array[idx] = temp[k];
        k++;
    }
    return;
}

//sorting method
void mergesort(vector<int> &arr, int s, int e){
    //base case i.e if there is only one element in array so its already sorted
    if(s>=e){
        return;
    }

    //rec case
    int mid = (s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    return merge(arr,s,e);
}   

int main(){
    vector<int> arr{10,5,2,0,7,6,4};

    int s = 0;
    int e = arr.size()-1;
    mergesort(arr,s,e);
    for(int i : arr){
        cout<<i<<" ,";
    }
}