
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(const pair<ll,pair<ll,ll>>&a,const pair<ll,pair<ll,ll>>&b)
{
    return a.first<b.first;
}

int main()
{
    ll tc,n,k;
    cin>>tc;
    while (tc--)
    {
        cin>>n>>k;
        ll a[n];

        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }

        ll bin_arr[64]= {0},ans=0;
        for(ll i=0; i<n; i++)
        {
            ll ind=0,d=a[i];
            if(!a[i])
            {
                bin_arr[0]++;
                continue;
            }

            while(d)
            {
                if(d%2)
                    ans++;
                else
                    bin_arr[ind]++;
                ind++;
                d/=2;
            }


        }
        for(ll i=0; i<64&&k>0; i++)
        {
            ll d=(1LL<<i);

            if(bin_arr[i]*d<=k)
            {
                ans+=bin_arr[i];
                k-=bin_arr[i]*d;
            }
            else
            {
                ans+=(k/d);
                k=0;
            }


        }

        cout<<ans<<endl;


    }


    return 0;
}
