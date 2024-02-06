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
        ll n,m,k,ans=0;

        cin>>n>>m>>k;
        ll a[n],b[m],mxa=0,mxb=0,sum1=0,sum2=0;
        ll mna=INT_MAX,mnb=mna;
        ll cpsum1;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            mxa=max(mxa,a[i]);
            mna=min(mna,a[i]);
            sum1+=a[i];
        }
        cpsum1=sum1;

        for(i=0; i<m; i++)
        {
            cin>>b[i];
            mnb=min(mnb,b[i]);
            sum2+=b[i];
            mxb=max(mxb,b[i]);
        }

        if(k&1)
        {

            if(k==1)
            {
                if(mna<mxb)
                {
                    sum1+=mxb;
                    sum1-=mna;
                }

            }
            else
            {
                if(mna<mxb)
                {
                  //  sum1-=mxa;
                    sum1+=max(mxa,mxb);
                    sum1-=mna;
                }
            }

        }
        else
        {
            if(mnb<mxa){

            sum1-=mxa;
            sum1+=mnb;
            }
        }





        cout<<sum1<<endl;



    }

    return 0;
}






