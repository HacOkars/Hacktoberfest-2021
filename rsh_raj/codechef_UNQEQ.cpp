#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define f1(a, b) for (int i = a; i < b; i++)
#define f2(a, b) for (int i = a; i > b; i--)
void boost()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {

        /*cin>>n;
ll a[n+1];
for(int i=0;i<n;i++){
cin>>a[i];
}*/
        cin >> n;
        if (n % 4)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n / 2 - 1; i++)
            {
                if (i < n / 4)
                    cout << 2 * i + 1 << " ";
                else
                    cout << 2 * (i + 1) << " ";
            }
            cout << n << endl;
            for (int i = 0; i < n / 2 - 1; i++)
            {
                if (i < n / 4)
                    cout << 2 * (i + 1) << " ";
                else
                    cout << 2 * i + 1 << " ";
            }
            cout << n - 1 << endl;
        }
    }
    return 0;
}
