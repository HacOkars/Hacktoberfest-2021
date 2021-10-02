public class PerfectSquares {
    public int numSquares(int n) {
        int[] dp = new int[ n +1];
        dp[1] = 1;
        for (int i = 2; i <= n; i++) {
            int min = dp[i-1]+1;
            for (int j = 1; j*j <= i; j++) {
                if (dp[i - j*j] + 1 < min) {
                    min = dp[i-j*j] +1;
                }
                dp[i] = min;
            }
        }
        return dp[n];
    }
}
