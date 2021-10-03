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
    string s, s1;
    
    while (t--)
    {
        int a = 0, b = 0, c = 0,d=0;
        cin >> n;

       cin>>s>>s1;
        for (int i = 0; i < n; i++)
        {
           
           if (s[i] == '1' && s1[i] == '1') c++;
           if(s[i]=='0' && s1[i]=='1') b++;
           if(s[i]=='1' && s1[i]=='0') a++;
           if(s[i]=='0' && s1[i]=='0') d++;

            
        
        }
      //  cout<<a<<b<<c<<endl;
        cout<<min(a,b)+min(c,abs(a-b)+d)+max(0,(c-abs(a-b)-d)/2)<<endl;
    }
    return 0;
}
