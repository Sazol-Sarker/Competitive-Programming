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
    cin >> tc; // Number of test cases
    while (tc--)
    {
        ll n, k;
        cin >> n >> k; // Number of elements

        ll ans = 0, tmp=0, arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++){
            if(!arr[i]){
                    tmp++;
            }
            else{
                tmp=0;
            }
            if(tmp==k){
                ans++;
                tmp=0; 
                i++;
                }
        }


        cout << ans << en;
    }

    return 0;
}
