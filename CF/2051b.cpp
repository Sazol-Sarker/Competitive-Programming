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
        ll a,b,c;
        cin>>n>>a>>b>>c;
        ll ans=0,sum1=a+b,sum2=sum1+c;
        ans=n/sum2;
        ans*=3;
        n=n%sum2;

        if(n)
        {

        if(n<=a) ans++;
        else if(n>sum1) ans+=3;
        else ans+=2;
        }


       // for(i=0; i<n; i++)






        cout<<ans<<endl;
    }


    return 0;
}
