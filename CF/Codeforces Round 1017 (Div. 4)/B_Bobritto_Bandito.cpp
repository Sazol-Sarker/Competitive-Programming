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
        ll n,m,l,r;
        cin >> n>>m>>l>>r;
        ll ansl=0,ansr=0;
        if(m>0)  {
            
            ansr=min(m,r);
            m-=min(m,r);
            if(m>0){
                ansl-=m;

            }
        }

        cout<<ansl<<" "<<ansr<<en;
        
    }

    return 0;
}
