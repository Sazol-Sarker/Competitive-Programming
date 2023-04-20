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
        ll n,i,x1,x2,y1,y2;
        cin>>n;
        cin>>x1>>y1;
        cin>>x2>>y2;
        ll seg1=-1,seg2=-1;
        ll seg=0;
        for(i=1; i<=n/2; i++)
        {
            if(seg1!=-1&&seg2!=-1) break;

            seg++;
            j=i;

                if((x1>=i&&x1<=n+1-i)&&(y1>=j&&y1<=n+1-j))
                    seg1=seg;
                if((x2>=i&&x2<=n+1-i)&&(y2>=j&&y2<=n+1-j))
                    seg2=seg;


        }
        cout<<seg1<<"  "<<seg2<<en;
        cout<<abs(seg1-seg2)<<en;

    }
    return 0;
}










