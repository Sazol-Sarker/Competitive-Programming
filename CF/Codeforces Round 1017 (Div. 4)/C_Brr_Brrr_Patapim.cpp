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
        ll n,num;
        cin >> n;
        unordered_set<ll>st;
        for(ll i=1;i<=2*n;i++){
            
            st.insert(i);
        }
       vector<ll>ans;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                cin>>num;
            if(!i){
                st.erase(num);
                ans.push_back(num);
            }
            else if(i+1==n&&j>0){
                st.erase(num);
                ans.push_back(num);
            }
            
            }
        }
        for(auto it:st){
            cout<<it<<" ";
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<en;
    }

    return 0;
}
