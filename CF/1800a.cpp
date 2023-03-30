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

int fact(int n);

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}


int fact(int n)
{
    if(n==0)
        return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

ll fnd(int x,int y,int src)
{
    if(x<=src&&src<=y)
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
        ll n,m;
        cin>>n>>s;
        for(i=0;s[i];i++)
            s[i]=tolower(s[i]);

        ll ok=1,i=0,ok1=0,ok2=0,ok3=0,ok4=0;
        while(i<n&&ok)
        {

            while(i<n&&s[i]=='m'||s[i]=='M')
            {
                i++;ok1=1;
            }
            while(i<n&&s[i]=='e'||s[i]=='E')
            {
                ok2=1;
                i++;
            }
            while(i<n&&s[i]=='o'||s[i]=='O')
            {
                ok3=1;
                i++;
            }
            while(i<n&&s[i]=='w'||s[i]=='W')
            {
                i++;
                ok4=1;
            }
            if(s[i]!='m'||s[i]!='e'||s[i]!='o'||s[i]!='w')
                break;
        }

        //cout<<i<<en;


        if(i==n&&ok1&&ok2&&ok3&&ok4)
            yes;
        else
            no;



    }
    return 0;
}

