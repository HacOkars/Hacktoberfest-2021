#include<bits/stdc++.h>
using namespace std ;

string printSCS(string s1, string s2)
{
    int m = s1.size() ;
    int n = s2.size() ;
    
    int dp[m+1][n+1] ;
    
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0)
                dp[i][j]=j;
                
            else if(j==0)
                dp[i][j]=i;
                
            else if(s1[i-1]==s2[j-1])
                dp[i][j] = 1+dp[i-1][j-1] ;
                
            else
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) ;
        }
    }
    
    string s3 ;
    
    int i=m, j=n;
    
    while(i>0 && j>0)
    {
        if(s1[i-1]==s2[j-1]){
            s3.push_back(s1[i-1]) ;
            i--;
            j--;
        }
        else if(dp[i-1][j]>dp[i][j-1]){
            s3.push_back(s2[j-1]) ;
            j-- ;
        }
        else {
            s3.push_back(s1[i-1]) ;
            i--;
        }
    }
    
    while(i>0){
        s3.push_back(s1[i-1]) ;
        i--;
    }
        
    while(j>0){
        s3.push_back(s2[j-1]) ;
        j--;
    }
        
    reverse(s3.begin(),s3.end()) ;
    
    return s3 ;
}

int main()
{
    string X = "HELLO";
	string Y = "GEEK";
    
    cout<<printSCS(X,Y); 
}


