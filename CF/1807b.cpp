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
        ll n,k;
        cin>>n;
        ll a[n];
        vector<ll>v1,v2;
        ll s1=0,s2=0;
        for(i=0; i<n; i++)
        {

            cin>>x;
            if(x%2==0)
            {
                v1.pb(x);
                s1+=x;
            }
            else
            {

                v2.pb(x);
            s2+=x;
            }

        }
        sort(v1.begin(),v1.end(),greater<ll>());
        sort(v2.begin(),v2.end());
        /*
        for(auto it:v1)
        cout<<it<<" ";
                for(auto it:v2)
        cout<<it<<" ";
        */
        //cout<<s1<<" "<<s2<<en;
        if(s1>s2)
            yes;
        else
            no;

    }
    return 0;
}

