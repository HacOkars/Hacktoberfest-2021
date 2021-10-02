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
    ll t, n, a;
    cin >> t;
    string s;
    while (t--)
    {
        int flag = 1;
        cin >> n;
        cin >> s;
        a = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'H')
                a++;
            else if (s[i] == 'T')
                a--;
            if (a < 0 || a > 1)
            {
                cout << "Invalid"
                     << "\n";
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            if(!a)cout << "Valid"
                 << "\n";
            else cout<<"Invalid"<<"\n";
        }

        /*cin>>n;
ll a[n+1];
for(int i=0;i<n;i++){
cin>>a[i];
}*/
    }
    return 0;
}
