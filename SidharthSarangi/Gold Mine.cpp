// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
     int dp[51][51] ;
public:
    
    int maxGold(int n, int m, vector<vector<int>> mat)
    {   
       
        for(int j=0;j<m;j++){
	        for(int i=0;i<n;i++){
	            if(j==0){
	                dp[i][j]=mat[i][j];
	            }
	            else if(i==0){
	                
	                dp[i][j]=max(dp[i][j-1],dp[i+1][j-1])+mat[i][j];
	            }
	            else if(i==n-1){
	                dp[i][j]=max(dp[i][j-1],dp[i-1][j-1]) + mat[i][j];
	            }
	            else{
	                dp[i][j]=max(max(dp[i-1][j-1],dp[i][j-1]),dp[i+1][j-1]) + mat[i][j];
	            }
	        }
	    }
	    int maxx =0 ;
	    for(int i=0;i<n;i++){
	        maxx=max(maxx,dp[i][m-1]);
	    }
	   if(n==1){
	       maxx=0;
	      for(int i=0;i<m;i++){
	          maxx+=mat[0][i];
	      } 
	   }
	   return maxx ;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}  // } Driver Code Ends