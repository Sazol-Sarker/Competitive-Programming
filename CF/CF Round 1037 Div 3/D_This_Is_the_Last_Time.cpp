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
bool cmp(pair<pair<ll,ll>,ll > &a, pair<pair<ll,ll>,ll> &b)
{
    // Example: Sort by first ascending, then second descending
    if (a.first.first == b.first.first)
        return a.first.second > b.first.second;
    return a.first.first < b.first.first;
}

int main()
{
    fast_io();

    ll tc;
    cin >> tc; // Number of test cases
    while (tc--)
    {
        ll n, k,l,r,real;
        cin >> n >> k; // Number of elements

        ll ans = 0, curCoin=k;
        vector<pair<pair<ll,ll>,ll>> v;
        for (ll i = 0; i < n; i++)
        {
            cin >>l>>r>>real ;
            v.push_back({{l, r}, real});
        }
        //sort vector by 1st elem
        // never pick real if real < curCoin
        sort(v.begin(), v.end(), cmp);

        for(auto it:v){
          //  cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<en;
        if(curCoin>=it.first.first&&curCoin<=it.first.second){
            if(curCoin<it.second)
            curCoin=it.second;
        }
        
    }
       
         cout << curCoin << en;
    }

    return 0;
}
