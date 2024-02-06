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
        ll n,k,m;

        cin>>n>>k>>m>>s;
        //  getline(cin,s);
        // string ans;

        map<char,int>mp;
        for(i=0; i<m; i++)
        {
            mp[s[i]]++;
        }

        bool ok=1;

        set<char>st;
        set<char>chk;
        ll ind[m];
        for(i=m-1; i>=0; i--)
        {
            st.insert(s[i]);
            ind[i]=st.size();
            if(ind[i]==n)
                chk.insert(s[i]);
        }
        char ch;
        ll in;
        for(i=0; i<m; i++)
        {
            if(ind[i]<k)
            {
                in=i;
                ch=s[i];
                break;
            }

        }
       // cout<<ch<<"   ch"<<endl;

        if(chk.size()!=n)
            ok=0;
        ll fnd=0;
        for(i=0;i<k;i++)
        {
            char f=i+97;
            if(mp[f]>=n);
            else
            {
                ok=0;
                fnd=1;
                ch=f;
            }

       // cout<<f<<"   f"<<endl;
        }
       // cout<<ch<<"   ch"<<endl;

        if(ok)
            yes;
        else
        {
            no;
            string ans;

          //  if(fnd)
           // {
                for(i=0; i<n; i++)
                    ans+=ch;
            //}
           /* else
            {

               ans+=s[in];
                ll av=ch-'a';
                for(i=0; i<n; i++)
                {
                    ch='a'+i;
                    if(i==av);
                    else
                        ans=ans+ch;
                    // cout<<ch;
                }
            }*/
            cout<<ans<<endl;


        }
    }

    return 0;
}






