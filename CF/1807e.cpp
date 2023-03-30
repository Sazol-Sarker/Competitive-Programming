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
        ll n,m,i1,j1,i2,j2,d;
        cin>>n;
        ll a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(i)
                a[i]+=a[i-1];
        }
        ll ok=1;
        ll ryt=n-1;
            ll mid=(1+ryt+1)/2;
        while(ok)
        {
            ll k=mid;
            printf("?%d",k);
            fflush(stdout);
            for(i=1; i<=mid; i++)
            {
                printf("%d",i);

                fflush(stdout);
            }
            cin>>x;
            if(x>=a[mid])
            mid=(1+mid)/2;
            else mid=(mid+ryt)/2;


            }
        cout<<"!"<<idx<<en;

    }


    return 0;
}

