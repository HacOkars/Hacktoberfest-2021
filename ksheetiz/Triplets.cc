#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

vector<vector<int>> triplets(vector<int> arr, int sum){
    //Logic
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;
    //Pick every a[i], pair sum for remaining part
    for(int i = 0; i < arr.size()-3; ++i){
        int j = i + 1;
        int k = arr.size()-1;
        
        //two pointer approach
        while(j<k){
            int current_sum = arr[i];
            current_sum += arr[j];
            current_sum += arr[k];
            if(current_sum == sum){
                result.push_back({arr[i], arr[j], arr[k]});
                j++;    k--;
            }
            else if(current_sum > sum)
                k--;
            else
                j++;
        }
    }
    return result;
}

int main(){
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int s = 18;

    auto result = triplets(vec,s);
    for(auto v : result){
        for(auto no : v){
            cout<<no<<",";
        }
        cout<<endl;
    }

}