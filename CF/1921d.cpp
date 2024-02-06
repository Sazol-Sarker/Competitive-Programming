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
        ll n,m,ans=0;

        cin>>n>>m;
        ll arr[n],arr1[m];
        vector<ll>v;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        for(i=0; i<m; i++)
        {
            cin>>arr1[i];
            v.pb(arr1[i]);

        }
        sort(arr,arr+n);
        sort(arr1,arr1+m);
        ll st[m];
        memset(st,1,sizeof(st));

        for(i=0; i<n; i++)
        {
            ll val=arr[i];
            ll lft=0;
            ll ryt=v.size();

            while(lft<ryt)
            {
                ll mid=(lft+ryt)/2;
                if(abs(arr1[mid]-val)<abs(arr1[ryt]-val)){
                    lft=mid+1;
                }
                else{
                    ryt=mid-1;
                }
            }
            if(abs(arr1[lft]-val)<abs(arr1[ryt]-val)){
            {
                ans+=abs(arr1[ryt]-val);


            }




            ans+=diff;
        }



        cout<<ans<<endl;
    }

    return 0;
}



