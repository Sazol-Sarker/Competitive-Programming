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

        if(!n){
            cout << 0 << en;
            continue;
        }

        vector<ll> arr;
        while(n>0) {
            arr.push_back(n%10);
            n/=10;
        }


        // Example: Sort array (ascending)
        sort(arr.begin(), arr.end());

       
            cout << arr[0] << en;
        
    }

    return 0;
}
