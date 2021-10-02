#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int32_t main()
{
    fast int t = 1;
    fflush(stdin);

    cin >> t;
    while (t--)
    {
        fflush(stdin);

        int n = 0;
        fflush(stdin);

        string s = "";
        fflush(stdin);

        cin >> n;
        cin >> s;
        if (n == 1)
        {
            if (s[0] == '?')
                cout << 'B' << endl;
            else
                cout << s << endl;
            continue;
        }
        if (s[1] == 'R' && s[0] == '?')
            s[0] = 'B';
        else if (s[1] == 'B' && s[0] == '?')
            s[0] = 'R';
        if (s[n - 2] == 'R' && s[n - 1] == '?')
            s[n - 1] = 'B';
        else if (s[n - 2] == 'B' && s[n - 1] == '?')
            s[n - 1] = 'R';
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == '?' && (s[i + 1] == 'B' || s[i - 1] == 'B'))
                s[i] = 'R';
            if (s[i] == '?' && (s[i + 1] == 'R' || s[i - 1] == 'R'))
                s[i] = 'B';
            if ((s[i] == 'B' || s[i] == 'R') && s[i - 1] == '?')
            {
                for (int j = i - 1; j >= 0; j--)
                {
                    if (s[j] == '?' && (s[j + 1] == 'B' || s[j - 1] == 'B'))
                        s[j] = 'R';
                    if (s[j] == '?' && (s[j + 1] == 'R' || s[j - 1] == 'R'))
                        s[j] = 'B';
                }
            }
        }
        if (s[n - 1] == '?' && s[n - 2] == 'B')
            s[n - 1] = 'R';
        if (s[n - 1] == '?' && s[n - 2] == 'R')
            s[n - 1] = 'B';
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
                if (k == 1)
                    s[i] = 'B';
                else
                    s[i] = 'R';
            k *= -1;
        }

        cout << s << endl;
        fflush(stdin);
    }
    return 0;
}
