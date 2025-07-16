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
    cin >> tc;
    while ( tc--)
    {
        
        ll n, m, k;
        cin >> n >> m >> k;
       
        if (m % k)
        {
            ll num = 1;
          for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
                cout << num << " ";
                num++;
                if (num > k){
                    num = 1;
                }
            }
            cout<<en;
          }
        }
        else{
            for(ll i = 1; i <= n; i++)
            {
                ll num;
                if(i%2) num=1;
                else num=2;
                for (ll j = 1; j <= m; j++)
                {
                    cout << num << " ";
                    num++;
                    if (num > k){
                        if(i%2)
                        num=1;
                        else num=2;
                    }
                }
                cout << en;
            }
        }
        vector<ll> ans;

      
        {
            if (!flip)
            {

                for (ll j = 1; j <= k; j++)
                {
                    ans.push_back(j);
                }
            }
            else
            {
                if (i % 2 )
                {

                    for (ll j = 1; j <= k; j++)
                    {
                        ans.push_back(j);
                    }
                }
                    else
                {
                    for (ll j = 2; j <= k; j++)
                    {
                        ans.push_back(j);
                    }
                    ans.push_back(1);
                }
            }
            cout<<"ans==>"<<en;
            for(auto it:ans){
                cout<<it<<" ";
            }
            cout<<en;

            ll idx = 0;
            // for (ll i = 0; i < n; i++)
            // {
            //     for (ll j = 0; j < m; j++)
            //     {
            //         cout << ans[idx] << " ";
            //         idx++;
            //     }
            //     cout << en;
            // }
        }
    }

    return 0;
}
