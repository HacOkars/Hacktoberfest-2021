// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int minimumNumberOfDeletions(string s1) { 
        // code here
        int n = s1.size() ;
        
        string s2 = string(s1.rbegin(),s1.rend()) ;
        //string s3 = string(s1.end(),s1.begin()) ;
        
        //cout<<s2<<endl;
        
        int dp[n+1][n+1] ;
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                    dp[i][j] = 0;
                    
                else if(s1[i-1]==s2[j-1])
                    dp[i][j] = 1+ dp[i-1][j-1] ;
                    
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]) ;
            }
        }
        
        return n-dp[n][n];
    } 
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}  // } Driver Code Ends