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
    cin >> tc;  
    while (tc--) {
        ll n,c;
        cin >> n;  

        vector<ll> arr(n);
        ll flag[n]= {1};
        for (ll i = 0; i < n; ++i) {
            cin >> arr[i];  
        }

        // Example: Sort array (ascending)
        sort(arr.begin(), arr.end(),greater<ll>());

        
        ll ans=0;
        unordered_set<ll>st;
        for(ll i = 0; i < n; ++i) {
            st.insert(i+1);
        }
      
        for(ll i = 0; i < n; ++i) {
            if(arr[i]>c) ans++;
            else{
                
            }

           
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
