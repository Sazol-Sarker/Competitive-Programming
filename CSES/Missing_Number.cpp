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
        cin >> n;
        //TC: O(N) SC: O(1)  
        ll num,sum=n*(n+1)/2,arrSum=0;
        for(ll i=1;i<n;i++)
        {
            cin>>x;
            arrSum+=x;
        }
        num=sum-arrSum;
        
        cout<<num<<en;
  
    }

    return 0;
}
