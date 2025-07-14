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
        ll n,k;
        cin>>n;
        ll a[n],cnt=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];

        }
        bool ok=0;

        for(i=1; i<n; i++)
        {
            if(a[i]==0&&a[i-1]==0)
            {
                ok=1;
            }
            if(a[i]==1)
                cnt++;

        }
        if(a[0])
            cnt++;
        if(ok||cnt==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;






    }


    return 0;
}
