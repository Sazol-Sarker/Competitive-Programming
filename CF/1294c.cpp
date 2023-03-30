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
        ll n;
        cin>>n;
        vector<pair<ll,ll>>v;
        for(i=2; i*i<=n; i++)
        {
            if(n%i==0)
                v.pb(mp(i,n/i));
        }

        if(v.size()==0)
        {
            cout<<"NO"<<en;
        }
        else
        {
            vector<ll>ans;

            ll fnd=0;
            for(auto it:v)
            {
                if(fnd)
                    break;
                ll d1=it.fi;
                ll d2=it.se;
                for(i=2; !fnd&&i*i<=d1; i++)
                {
                    if(d1%i==0)
                    {
                        if(i!=d2&&i!=(d1/i)&&d2!=(d1/i))
                        {

                            fnd=1;
                            ans.pb(d2);
                            ans.pb(d1/i);
                            ans.pb(i);
                            break;
                        }
                    }
                }
                if(!fnd)
                {
                    for(i=2; !fnd&&i*i<=d2; i++)
                    {
                        if(d2%i==0)
                        {
                            if(i!=d1&&i!=(d2/i)&&d1!=(d2/i))
                            {

                                fnd=1;
                                ans.pb(d1);
                                ans.pb(d2/i);
                                ans.pb(i);
                                break;
                            }
                        }
                    }
                }


            }
            if(fnd)
            {
                cout<<"YES"<<en;
                for(auto it:ans)
                    cout<<it<<" ";
                cout<<en;

            }
            else
                cout<<"NO"<<en;
        }
    }
    return 0;
}
