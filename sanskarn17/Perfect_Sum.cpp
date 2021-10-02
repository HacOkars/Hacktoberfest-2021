// Question Link : [ https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1 ]

#include<bits/stdc++.h>
using namespace std;

class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
	    long long mod = 10e9 + 7;
        int dp[n+1][sum+1];
        for(int i=0;i<=n; i++){
            for(int j=0; j<=sum; j++){
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=1;
            }
        }
        
        for(int i=1;i<=n; i++){
            for(int j=1; j<=sum; j++){
               if(arr[i-1]<=j){
                   dp[i][j]= ((dp[i-1][j-arr[i-1]]) % 1000000007 + (dp[i-1][j]) % 1000000007) % 1000000007;
                   
               }
               else{
                   dp[i][j]= (dp[i-1][j]) % 1000000007;
               }
            }
        }
        return (dp[n][sum]  % 1000000007) ;
        
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
        int ans = ob.perfectSum(arr, n , sum );
        cout<<ans<<"\n";
    }
    return 0;
}