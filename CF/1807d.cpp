//Radhe Radhe
#include<bits/stdc++.h>
#define FASTIO_  ios_base:: sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long

#define mod 1000000007
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define itr(i,n)    for(ll i=0; i<n; i++)
#define itr_ab(i,a,b)    for(ll i=a; i<=b; i++)
#define itrV(i,n)    for(ll i=0; i<v.size(); i++)
#define fixed cout.setf(ios::fixed);
#define precise cout.precision(15);
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define en '\n'

using namespace std;

//use when sorting needed
bool cmp(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    if(a.se>b.se)
        return 1;
    else
        return 0;
}
int main()
{
    FASTIO_
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll  tc,n,m,x,y,i,j,k;
    string s,t;
    //tc=1;
    cin>>tc;

    while(tc--)
    {
        ll n,q,l,r,k;
        cin>>n>>q;
        ll a[n],sum=0,pre[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(i)
                pre[i]=pre[i-1]+a[i];
            else
                pre[i]=a[i];
        }
        while(q--)
        {
            ll ok=1;
            cin>>l>>r>>k;
            ll ans=0,itm=r-l+1;
            ll mi=0;
            if(l==1) mi=pre[r-1];
            else
            mi=pre[r-1]-pre[l-2];

            ans=sum+k*(r-l+1);
            ans-=mi;


            if(ans%2==0)
                ok=0;
          //  cout<<ans<<"  "<<mi<<"  "<<pre[r]<<"   "<<pre[l-1]<<en;


            if(ok)
                yes;
            else
                no;
        }

    }
    return 0;
}

