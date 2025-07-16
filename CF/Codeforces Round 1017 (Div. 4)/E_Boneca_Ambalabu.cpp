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
bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    // Example: Sort by first ascending, then second descending
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    fast_io();

    ll cntTc = 1, tc;
    cin >> tc;
    while (cntTc <= tc)
    {
        cntTc++;
        // cout << "TC=> " << cntTc<< en;
        ll n;
        cin >> n;

        ll arr[n], ans = 0, tmp;
        ll bits=32;
        vector<ll> bitCount(bits, 0);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        // BIT manipulation to find maximum XOR sum

        for (ll i = 0; i < n; i++)
        {
           
            for (ll j = 0; j < bits; j++)
            {
                if (arr[i] & (1LL << j))
                    bitCount[j]++;
            }
           
        }

        for(ll i=0;i<n;i++)
        {
            ll tmp=0;
            for(ll j=0;j<bits;j++){
                ll ones= bitCount[j];
                ll zeros = n - ones;
                if (arr[i] & (1LL << j))
                    tmp += zeros * (1LL << j);
                else
                    tmp += ones * (1LL << j);
            }
            ans=max(ans,tmp);
        }
        cout << ans << en;
    }

    return 0;
}
