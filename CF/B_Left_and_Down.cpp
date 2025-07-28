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

    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b, k, ans;
        string s;
        cin >> a >> b >> k;
        if (a <= k && b <= k)
            ans = 1;
        else if (__gcd(a, b) <= k)
        {
            ans = 2;
        }

        else
        {
            ans = 3;
        }

        cout << ans << en;
    }

    return 0;
}
