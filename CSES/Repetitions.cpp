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

    ll tc=1;
      
    while (tc--) {
        ll n,x;
        string s;
        cin >> s;
        //TC: O(N) SC: O(1)  
        ll ans=1,tmp=1,sz=s.size();
        for(ll i=1;i<sz;i++)
        {
            if(s[i]==s[i-1]) tmp++;
            else tmp=1;
            ans=max(ans,tmp);
        }
        
        cout<<ans<<en;
        
  
    }

    return 0;
}
