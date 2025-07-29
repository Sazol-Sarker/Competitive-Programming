#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define en '\n'

// Fast I/O
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

// Comparator for sorting vector of pairs
bool cmp(pair<ll, ll> &a, pair<ll, ll> &b) {
    // Example: Sort by first ascending, then second descending
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main() {
    fast_io();

    ll tc;
    cin >> tc;  // Number of test cases
    while (tc--) {
        ll n;
        cin >> n;  // Number of elements

        vector<ll> arr(n);
        for (ll i = 0; i < n; ++i) {
            cin >> arr[i];  // Input array
        }

        // Example: Sort array (ascending)
        sort(arr.begin(), arr.end());

        // Output array
        for (ll i = 0; i < n; ++i) {
            cout << arr[i] << ' ';
        }
        cout << en;

        // Example: Vector of pairs input
        vector<pair<ll, ll>> vp(n);
        for (ll i = 0; i < n; ++i) {
            cin >> vp[i].first >> vp[i].second;
        }

        // Sort pairs with custom comparator
        sort(vp.begin(), vp.end(), cmp);

        // Output sorted pairs
        for (auto &p : vp) {
            cout << p.first << ' ' << p.second << en;
        }
    }

    return 0;
}
