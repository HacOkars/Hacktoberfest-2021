class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
    int n=coins.size();
        int req=amount;

    vector<int> dp(req + 1, -1);
    int ans = 0;// hadron(cap, pow, n, dp);
    for (int k = 0; k <= req; k++) {

        if (k == 0) {
            dp[k] = 0;
            continue;
        }

        int ans1 = 1e5;

        for (int i = 0; i < n; i++)
        {
            if (k >= coins[i]) {
                int subAns = dp[k - coins[i]]; //hadron(req - itr[i], itr, n, dp);
                ans1 = min(ans1, subAns);
            }
        }
        dp[k] = ans1 + 1;
    }
    ans = dp[req];
    if (ans >= 1e5)
        return -1;
    else
        return ans;
    dp.clear();
    }
};
