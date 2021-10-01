// Question Link : [ https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1# ]

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       int dp[n+1][w+1];
       for(int i=0; i<=n; i++){
           for(int j=0; j<=w;  j++){
               if(i==0 or j==0){
                   dp[i][j]=0;
               }
           }
       }
       
       for(int i=1; i<=n; i++){
           for(int j=1; j<=w;  j++){
               if(wt[i-1]<=j){
                   dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]] , dp[i-1][j] );
               }
               else{
                   dp[i][j] = dp[i-1][j];
               }
           }
       }
       return dp[n][w];
    }
};


int main(){
    int tc; 
    cin>>tc;     // number of test cases
    while(tc--){
        int n,w;
        cin>>n>>w;
        int wt[n], val[n];

        for(int i=0; i<n; i++)
        {
            cin>>val[i];
        }

        for(int i=0; i<n; i++){
            cin>>wt[i];
        }

        Solution ob;
        int ans = ob.knapSack(w, wt, val, n);
        cout<<ans<<"\n";
    }
    return 0;
}