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
    cin >> tc; // Number of test cases
    while (tc--)
    {
        ll n, k;
        cin >> n >> k; // Number of elements

        ll ans = 0, tmp=0, arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll cur=arr[k-1], waterlvl=1,i=0;
        sort(arr,arr+n);
        ll mx=arr[n-1];
       
           while(arr[i] != cur&&i<n){
                i++;
                
            }

            bool ok=1;
            for(ll j=i;ok&& j+1<n; j++){
                if(waterlvl+abs(arr[j]-arr[j+1])>cur+1){
                    ok=0; break;
                }
                else{
                    waterlvl+=abs(arr[j]-arr[j+1]);
                    cur=arr[j+1];
                }
                if(cur==mx){
                 ok=1;break;
                }
            }
        
                if(ok)
                cout << "YES" << en;
                else
                cout << "NO" << en;
        // cout << ans << en;
    }

    return 0;
}
