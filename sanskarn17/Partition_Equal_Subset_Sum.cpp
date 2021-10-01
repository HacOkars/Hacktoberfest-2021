// Question Link : [ https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1 ]

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool equalPartition(int a[], int n)
    {
        int s=0;
        for(int i=0; i<n; i++){
            s+= a[i];
        }
        
        if(s%2 != 0){
            return false;
        }
        else{
            int ss= s/2;
            bool dp[n+1][ss +1];
            for(int i=0; i<=n; i++){
                for(int j=0; j<=ss; j++){
                    if(i==0) dp[i][j]= false;
                    if(j==0) dp[i][j]= true;
                }
            }
            for(int i=1; i<=n; i++){
                for(int j=1; j<=ss; j++){
                    if(a[i-1]<=j){
                        dp[i][j] = dp[i-1][j-a[i-1]] or dp[i-1][j];
                    }
                    else{
                        dp[i][j] = dp[i-1][j];
                    }
                }
            }
            return dp[n][ss];
        }
    }
};

int main(){
    int tc; 
    cin>>tc;     // number of test cases
    while(tc--){
        int n;
        cin>>n;
       
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        Solution ob;
        bool ans = ob.equalPartition(arr, n);
        if(ans){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}