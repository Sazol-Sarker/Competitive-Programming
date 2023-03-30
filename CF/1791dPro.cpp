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
        cin>>n>>s;

        set<char>st1;
        set<char>st2;
        ll ok=1,sz1,sz2,ans=0;

        for(i=0; i<n; i++)
        {
            if(i==n-1)
                ok=0;
            if(ok)
            {
                sz1=st1.size();
                st1.insert(s[i]);
                sz2=st1.size();
                if(sz1==sz2)
                {
                    ok=0;
                }
            }
            if(!ok)
            {
                st2.insert(s[i]);
            }
        }

        ll d=st1.size();
        ll d1=st2.size();
        ans=max(ans,d+d1);
            st1.clear();
        st2.clear();
        ok=1;
        for(i=n-1; i>=0; i--)
        {
            if(i==0)
                ok=0;
            if(ok)
            {
                sz1=st1.size();
                st1.insert(s[i]);
                sz2=st1.size();
                if(sz1==sz2)
                {
                    ok=0;
                }
            }
            if(!ok)
            {
                st2.insert(s[i]);
            }
        }

        d=st1.size();
        d1=st2.size();
        ans=max(ans,d+d1);

    cout<<ans<<en;
        //cout<<d+d1<<en;
        //cout<<d<<" "<<d1<<en;

    }
    return 0;
}









