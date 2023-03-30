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
        ll n,l,r;
        cin>>n>>l>>r;
        ll a[n],ans=0;
        for(i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);

        for(i=0; i<n-1; i++)
        {
            ll lft=i+1;
            ll ryt=n-1;
            ll prev=(lft+ryt)/2;


            while(lft<=ryt)
            {

                ll mid=(lft+ryt)/2;
                if(a[mid]+a[i]<l)
                    lft=min(n-1,mid+1);
                if(a[mid]+a[i]>r)
                    ryt=max(0LL,mid-1);

                if(prev==mid)
                    break;
                prev=mid;

            }
            if(a[lft]+a[i]>=l&&a[lft]+a[i]<=r);
            else
                lft=2;
            if(a[ryt]+a[i]>=l&&a[ryt]+a[i]<=r);
            else
                ryt=1;
            if(i==n-2)
            {
                if(a[i+1]+a[i]>=l&&a[i+1]+a[i]<=r)
                ans++;
                continue;
            }
            ans+=max(0LL,ryt-lft+1);
           // cout<<i<<" i "<<lft<<"  "<<ryt<<" "<<ans<<en;
        }
        cout<<ans<<en;

    }
    return 0;
}
