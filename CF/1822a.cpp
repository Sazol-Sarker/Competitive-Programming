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
//ll ans=0;
//use when sorting needed
bool cmp(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    if(a.se>b.se)
        return 1;
    else
        return 0;
}

string func(string s)
{
    string od,ev;
    ll n=s.size(),i,j,k;
    set<char>st1,st2;
    for(i=0; i<n; i++)
    {
        if(i%2)
        {
            od+=s[i];
            st1.insert(s[i]);
        }
        else
        {

            st2.insert(s[i]);
            ev+=s[i];
        }
    }

    if(st1.size()>st2.size())
    {
        return ev;
    }
    else
        return od;
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
        ll n,t,i,ans=0;
        cin>>n>>t;
        ll a[n],b[n],k,j;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
            cin>>b[i];
        ans=-1;
        ll cur,mx=0;
        for(i=0; i<n; i++)
        {
            if(i+a[i]>t);
            else
            {


                mx=max(mx,b[i]);
                if(b[i]==mx)
                    ans=i+1;
            }
        }

        cout<<ans<<en;
    }








    return 0;
}










