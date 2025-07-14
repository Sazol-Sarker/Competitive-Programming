#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    if(a.first==b.first)
        return a.second<b.second;

    return a.first<b.first;
}


int main()
{
    ll t,n,m,d,k,i,j,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        ll ans=0;
        vector<ll>v(n);
        vector<ll>pre(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
            if(i) pre[i]=pre[i-1]+v[i];
            else pre[i]=v[i];

        }
        sort(v.begin(),v.end());
        for(i=0;i<n;i++)
        {
            if(i) pre[i]=pre[i-1]+v[i];
            else pre[i]=v[i];

        }
        /*
        for(i=0;i<n;i++)
        {
            cout<<v[i]<<"  ++  "<<pre[i]<<endl;

        }*/

        for(i=0;i+1<n;i++)
        {
            ll val=pre[n-1]-v[i];

            if(hiInd>loInd)
            ans+=hiInd-loInd+1;
            cout<<hiInd<<"  "<<loInd<<"  "<<ans<<endl;
        }


        cout<<ans<<endl;
    }


    return 0;
}



