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
    ll  tc,n,m,x,y,i,j,k,cnt;
    string s,t;
    cin>>tc;

    while(tc--)
    {
        ll n,m,ok=1;
        cin>>n>>m>>s>>t;
        cnt=0;
       ll alp1[26]={0};
       ll alp2[26]={0};
        for(i=0; i<n; i++)
        {
            alp1[s[i]-'a']++;
        }
        for(i=0; i<m; i++)
        {
            alp2[t[i]-'a']++;
        }
        ll odd=0;
        for(i=0;i<26;i++)
        {
            ll d=alp2[i];
            d-=alp1[i];
            d=abs(d);
           alp1[i]=d;
        }
        for(i=0;i<26;i++)
        {
            if(alp1[i]&1)
                odd++;

        }

       // cout<<tc<<" tc "<<odd<<en;
        if(odd<=1)
            cout<<"YES"<<en;
        else
            cout<<"NO"<<en;
    }
    return 0;
}

