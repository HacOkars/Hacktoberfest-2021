// Question Link : [ https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1 ]

#include<bits/stdc++.h>
using namespace std;

class Solution{

  public:
	int minDifference(int a[], int n)  { 
	    int sum=0;
	    for(int i=0; i<n; i++){
	        sum+=a[i];
	    }
	    int s = sum/2;
	    bool dp[n+1][s+1];
	    for(int i=0; i<=n; i++){
	        for(int j=0; j<=s; j++){
	            if(i==0) dp[i][j]= false;
	            if(j==0) dp[i][j]= true;
	       }
	    }
	    
	    for(int i=1;i<=n; i++){
	        for(int j=1; j<=s; j++){
	            if(a[i-1]<=j){
	                dp[i][j] = dp[i-1][j-a[i-1]] or dp[i-1][j];
	            }
	            else{
	                dp[i][j]= dp[i-1][j];
	            }
	        }
	    }
	    vector<int> v;
	    for(int i=0; i<=s; i++){
	        bool c = dp[n][i];
	        if(c){
	            v.push_back(i);
	        }
	    }
	    sort(v.begin(), v.end());
	    int ans = sum-v[v.size()-1];
	    return abs(ans - v[v.size()-1]);
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
        int ans = ob.minDifference(arr, n);
        cout<<ans<<"\n";
    }
    return 0;
}