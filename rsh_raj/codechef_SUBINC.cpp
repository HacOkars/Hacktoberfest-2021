#include <bits/stdc++.h>
using namespace std;
long long *arr;
long long *memo;
long long dp(int i)
{
    if (memo[i] != -1)
        return memo[i];
    if (i == 0)
        return memo[i] = 1;
    if (arr[i] >= arr[i - 1])
        return memo[i] = 1 + dp(i - 1);
    else
    {
        dp(i - 1);
        return memo[i] = 1;
    }
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        arr = new long long[n + 1];
        memo = new long long[n + 1];
        // memset(memo,-1,sizeof(memo));
        for (int i = 0; i < n; i++)
        {
            memo[i] = -1;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        dp(n - 1);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += memo[i];
        }
        cout << sum << endl;
        free(arr);
        free(memo);
    }

    return 0;
}
