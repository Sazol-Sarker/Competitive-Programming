#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tc,n,m;
    cin>>tc;
    while (tc--)
    {
        cin>>n>>m;
        ll a[n+1][m+1],row[n+1]= {INT_MIN},col[m+1]= {INT_MIN};

        ll mx=INT_MIN;
        for(ll i=1;  i<=n; i++)
            for(ll j=1;  j<=m; j++)
            {
                cin>>a[i][j];
                mx=max(mx,a[i][j]);
                row[i]=max(row[i],a[i][j]);
                col[j]=max(col[j],a[i][j]);

            }

        ll prefRw[n+1],sufRw[n+1];



        vector<ll> prefixRwMax(n+1), suffixRwMax(n+1);

        prefixRwMax[1] = row[1];
        for(ll i=1; i<=n; i++)
        {
            prefixRwMax[i] = max(prefixRwMax[i-1], row[i]);
        }

        suffixRwMax[n] = row[n];
        for(int i=n-1; i>=1; i--)
        {
            suffixRwMax[i] = max(suffixRwMax[i+1], row[i]);
        }

         vector<ll> prefixColMax(m+1), suffixColMax(m+1);

        prefixColMax[1] = col[1];
        for(ll i=1; i<=m; i++)
        {
            prefixColMax[i] = max(prefixColMax[i-1], col[i]);
        }

        suffixColMax[m] = col[m];
        for(int i=m-1; i>=1; i--)
        {
            suffixColMax[i] = max(suffixColMax[i+1], col[i]);
        }



        ll ans=INT_MAX;

        for(ll i=1;  i<=n; i++)
            for(ll j=1;  j<=m; j++)
            {
                if(mx==a[i][j])
                {
                    ll d=max(row[i],col[j]);
                    ll out=max(prefixRwMax[i-1],suffixRwMax[i+1]);
                    d=max(d-1,out);
                    ans=min(ans,d);

                    d=max(row[i],col[j]);
                    out=max(prefixColMax[i-1],suffixColMax[i+1]);
                    d=max(d-1,out);
                    ans=min(ans,d);

                }
            }



        cout <<ans<<endl;
    }

    return 0;
}

