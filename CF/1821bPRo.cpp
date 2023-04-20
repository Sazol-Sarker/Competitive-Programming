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
        ll n,i,ok=0;
        cin>>n;
        ll a[n];
        ll b[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        ll num,inds=-1,inde,fnd=1,cnt=0,cntSortedPAir=0;
        for(i=0; i<n; i++)
        {
            if(a[i]==b[i])
                cnt++;
            else
            {
                if(fnd)
                {
                    fnd=0;
                    inds=i;
                    num=a[i];
                }
                inde=i;
            }
            if(i&&b[i]>=b[i-1])
                cntSortedPAir++;
        }
        //  cout<<"ind  "<<ind<<en;
        //ll ind2=ind;

        if(inds==-1)
            cout<<1<<" "<<n<<en;
          //  else if(cnt+(inde-inds+1)==n)
            //cout<<1<<" "<<n<<en;
        else
        {
           sort(a+inds,a+inde+1);
          ll sts=inds;
           ll stp=inde;

            for(i=inds; i>=0; i--)
            {
                if(a[i]<=a[i+1]) sts=i;
                else break;

            }
             for(i=inde; i<n; i++)
            {
                if(a[i-1]<=a[i]) stp=i;
                else break;

            }


            cout<<sts+1<<" "<<stp+1<<en;
        }
    }







    return 0;
}










