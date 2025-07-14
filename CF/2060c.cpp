#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    if(a.first==b.first)
        return a.second<b.second;

    return a.first<b.first;
}

ll f( vector<ll>&arr,vector<ll>&tmp,vector<ll>&dp,int ind)
{
    if(ind==arr.size())
    {
        ll mx=*max_element(tmp.begin(),tmp.end());


    }
    if(dp[ind]!=-1)
        return dp[ind];


}


int main()
{
    ll t,n,m,d,k,i,j,x,y;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        unordered_map<ll,ll>mp;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
         // mp[a[i]]++;
        }
        //sort(a,a+n);
        ll ans=0;
        for(i=0; i<n; i++)
        {
            ll fnd=k-a[i];
            if(mp.find(fnd)!=mp.end())
            {
                if(mp[fnd]>0)
                {
                mp[fnd]--;
                ans++;

                }
            }
            else mp[a[i]]++;
        }





        cout<<ans<<endl;
    }


    return 0;
}

