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
        cin >> n;
        //TC: O(N) SC: O(N)  
        ll arr[n],totalMove=0;
        for(ll i=0;i<n;i++)
        {
           cin>>arr[i];
           if(i){
            if(arr[i-1]>arr[i]){
                totalMove+=abs(arr[i-1]-arr[i]);
                arr[i]=arr[i-1];
            }
           }
        }
        
        cout<<totalMove<<en;
        
  
    }

    return 0;
}
