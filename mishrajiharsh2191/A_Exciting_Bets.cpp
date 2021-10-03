#include <bits/stdc++.h>
#define int long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
signed main()
{
    fastio;
    int t;
    cin >> t;
    
    while(t--)
    {
int a;
int b;
cin>>a;
cin>>b;
if (a == b)
{
    cout << "0 0 \n";
}
else if (a < b)
{
    int val = abs(a-b);
    cout << val << " " << abs(min(a % val, val - a % val)) << endl;
}
else
{
    int val = a - b;
    cout << val << " " << abs(min(b % val, val - b % val)) << endl;
}
    }
    return 0;
}