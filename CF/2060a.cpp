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
    if(dp[ind]!=-1) return dp[ind];


}


int main()
{
    ll t,n,m,d,k,i,j,x,y;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        map<ll,ll>mp;
        ll ans=0;
        mp[d-c]++;
        mp[c-b]++;
        mp[a+b]++;
        for(auto it:mp)
            ans=max(ans,it.second);



        cout<<ans<<endl;
    }


    return 0;
}

