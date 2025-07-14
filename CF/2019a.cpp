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
        cin>>n;
        vector<ll>arr(n);
        for(i=0;i<n;i++)
            cin>>arr[i];

        vector<ll>dp(n+1,-1);
        dp[0]=0;
        vector<ll>tmp;

        f(arr,tmp,dp,0);




        cout<<ans<<endl;
    }


    return 0;
}
