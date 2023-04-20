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
    cin>>tc;

    while(tc--)
    {
        ll n,i;
        cin>>n;
        ll a[n],ans=-1,bit[8]= {0};
        for(i=0; i<n; i++)
        {
            cin>>x;
            ll ind=7;
            while(x)
            {
                if(x&1)
                    bit[ind]++;
                   // cout<<1;
                //else cout<<0;
                ind--;
                x>>=1;
            }



        }

        ll d=0;
        for(ll j=7; j>=0; j--)
        {
            if(bit[j]%2)
        d+=(1<<j);


        }
        cout<<d<<en;

    }
    return 0;
}









