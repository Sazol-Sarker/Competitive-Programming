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
        cin>>n;
        ll ans=1;
        while(n>=4)
        {

            n/=4;
            ans*=2;
        }
        //if(n) ans++;
        cout<<ans<<endl;
    }


    return 0;
}

