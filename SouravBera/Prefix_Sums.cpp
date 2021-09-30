#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
    int n;
    cin>>n;
    if(n%4!=0)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    vector<int>v1;
    vector<int>v2;

    int a=1;
    int b=n;
    int flag=0;
    int check= n/2;
    while(check)
    {
        if(flag==0)
        {
            v1.push_back(a);
            a++;
            flag=1;

        }
        else{
            v1.push_back(b);
            b--;
            flag=0;
        }
        check--;
    }

    for(int i=a;i<=b;i++)
    {
        v2.push_back(i);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(auto val:v1)
    cout<<val<<" ";
    cout<<"\n";
    for(auto val:v2)
    {
        cout<<val<<" ";
    }
    cout<<"\n";
    return;
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
    //  cout << "Case #" << it+1 << ": ";
        solve();
    }
    return 0;
}