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
        ll n;
        cin>>n;
        ll a[n],o1=0,ev=0,od=0;
        vector<ll>odd,o11,evv;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1)
            {
                o11.pb(i+1);
                o1++;
            }

            else if(a[i]%2==0)
            {
                ev++;
                evv.pb(i+1);
            }
            else
            {
                od++;

                odd.pb(i+1);
            }
        }

        if(od>=3)
        {
            yes;
            cout<<odd.at(0)<<" "<<odd.at(1)<<" "<<odd.at(2)<<en;
        }
        else if(o1>=3)
        {
            yes;
            cout<<o11.at(0)<<" "<<o11.at(1)<<" "<<o11.at(2)<<en;
        }
        else if(o1==1&&od>=2)
        {
            yes;
            cout<<o11.at(0)<<" "<<odd.at(0)<<" "<<odd.at(1)<<en;

        }
        else
            no;
        cout<<"+++ "<<o1<<" "<<od<<"  "<<ev<<en;

    }
    return 0;
}








