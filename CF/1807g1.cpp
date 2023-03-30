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
        cin>>n;
        ll a[n],sum=0,pre[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
        ll ok=1;
        for(i=0; ok&&i<n; i++)
        {
            if(!i&&a[i]!=1)
                ok=0;
            else if(a[i]>1)
            {
                ll d=0,nm=a[i];
                for(j=i-1;j>=0;j--)
                {
                    if(a[j]<=nm) nm-=a[j];
                }
                if(nm==0);
                else ok=0;

            }
        }

        if(n==1&&a[0]==1) ok=1;

        if(ok)
            yes;
        else
            no;
    }


return 0;
}

