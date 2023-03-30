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
        char c;
        cin>>n;
        ll a[n],ans=0;
        map<char,ll>v;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<n; i++)
        {
            if(a[i-1]==0)
            {
                if(a[i]<0)
                a[i]*=-1;
                ans+=a[i];
            }
            if(abs(a[i-1])>=abs(a[i]))
            {
                if(a[i-1]<0)
                {
                    a[i-1]*=-1;
                    a[i]*=-1;

                }
                ans+=a[i-1];
                ans+=a[i];
            }
            else if(a[i-1]==0)
            {
                ans-=a[i];
                a[i]=abs(a[i]);
                ans+=a[i];
            }
            else  if(a[i]==0)
            {
                ans-=a[i-1];
                a[i-1]=abs(a[i-1]);
                ans+=a[i-1];

            }
            else if(a[i-1]+a[i]<0)
            {
                //if(abs(a[i-1])>abs(a[i]))
                //{
                ans-=a[i];
                ans-=a[i-1];
                a[i-1]*=-1;
                a[i]*=-1;
                ans+=a[i];
                ans+=a[i-1];
                //  }
            }
        }



        cout<<ans<<en;





    }
    return 0;
}









