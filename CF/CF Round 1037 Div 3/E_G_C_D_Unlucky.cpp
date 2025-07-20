#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define en '\n'

// Fast I/O
void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

// Comparator for sorting vector of pairs
bool cmp(pair<pair<ll,ll>,ll > &a, pair<pair<ll,ll>,ll> &b)
{
    // Example: Sort by first ascending, then second descending
    if (a.first.first == b.first.first)
        return a.first.second > b.first.second;
    return a.first.first < b.first.first;
}

int main()
{
    fast_io();

    ll tc;
    cin >> tc; 
    while (tc--)
    {
        ll n;
        cin >> n ; 
        ll ans = 0,p[n],s[n];
       
        for (ll i = 0; i < n; i++)
        {
            cin >>p[i];
        }
        bool ok=1;
        ll arr[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> s[i];
        }

     // array arr
     for(ll i=0; i<n; i++){
        arr[i]=__gcd(p[i], s[i]);
     }
     
        
        if(ok)
        cout<<"YES"<<en;
        else
        cout<<"NO"<<en;
        
       
    }

    return 0;
}
