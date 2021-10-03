#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
using namespace std;

int longestBand(vector<int> arr){
    int n = arr.size();
    unordered_set<int> s;

    //Data inside a Set
    for(int x : arr){
        s.insert(x);
    }

    //Iterate over the arr
    int largest_length= 0;

    for(auto element : s){
        int parent = element -1;

        if(s.find(parent) == s.end()){
            //Find Entire band / chain starting from element
            int next_no = element + 1;
            int cnt = 1;

            while(s.find(next_no) != s.end()){
                next_no++;
                cnt++;
            }
            if(cnt > largest_length)
                largest_length = cnt;
        }
    }
    return largest_length;
}

int main(){
    vector<int> arr{1,9,3,0,18,5,2,4,10,7,12,6};

    //My Approach O(nlogn)
    /*
    sort(arr.begin(),arr.end());
    int length = 0;
    int band = 0;
    for(int i = 0; i < arr.size(); ++i){
        if(arr[i+1] == (arr[i]+1)){
            band++;
        }
        else{
            if(length<band)
                length = band;
        }
    }
    cout<<length<<endl;
    */

    cout<<longestBand(arr)<<endl;

    return 0;
}