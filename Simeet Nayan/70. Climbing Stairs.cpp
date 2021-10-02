class Solution {
public:
    int ans(int n, vector<int> &dp){
        if(n<=1){
             return dp[n]=1;
         }

        if(dp[n]!=-1){
            return dp[n];
        }
        int c=ans(n-1, dp)+ans(n-2, dp);
        return dp[n]=c;

    }
    int climbStairs(int n) {
                 vector<int> dp(n+1, -1);
                 return ans(n, dp);
    }

    };
