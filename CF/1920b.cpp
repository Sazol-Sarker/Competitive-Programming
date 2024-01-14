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
        ll n,k,x,y,ans;

        cin>>n>>k>>x;
        ll a[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<ll>());

        ll pre[n]={0};
        for(i=0; i<n; i++)
        {
            if(!i) pre[i]=a[i];
            else pre[i]=pre[i-1]+a[i];

        }

        ll sum=pre[n-1];

        ll res=sum-2*pre[x-1];
        ans=res;
        k=min(k,n);
        for(i=0;i<k;i++)
        {
        ll d=i+x;
        if(d>=n) d=n-1;
        ll res=sum-pre[d];
        ll sub=pre[d]-pre[i];
        ans=max(ans,res-sub);

        }






        cout<<ans<<endl;
    }

    return 0;
}
