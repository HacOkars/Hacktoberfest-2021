// Question Link : [ https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1 ]

#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    bool isSubsetSum(int a[], int n, int sum){
        bool dp[n+1][sum+1];
        for(int i=0; i<=n; i++){
            for(int j=0; j<=sum; j++){
                if(i==0) dp[i][j]=false;
                if(j==0) dp[i][j]=true;
            }
        }
        for(int i=1; i<=n; i++){
            for(int j=1; j<=sum; j++){
                if(a[i-1]<=j){
                    dp[i][j]= (dp[i-1][j-a[i-1]] or dp[i-1][j]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
};

int main(){
    int tc; 
    cin>>tc;     // number of test cases
    while(tc--){
        int n,sum;
        cin>>n>>sum;
       
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        Solution ob;
        bool ans = ob.isSubsetSum(arr, n , sum );
        if(ans){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}