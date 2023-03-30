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

int main()
{
    FASTIO_
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll  tc,n,m,x,y,i,j,k;
    string s,t;
    tc=1;
    //cin>>tc;

    while(tc--)
    {
        ll n,k;
        cin>>s>>t;
        double ans;
        ll pnt=0;
        for(i=0; s[i]; i++)
        {
            if(s[i]=='+')
                pnt++;
            else
                pnt--;
        }

        ll pls=0;
        ll mi=0;
        ll oth=0;

        for(i=0; t[i]; i++)
        {
            if(t[i]=='+')
                pls++;
            else if(t[i]=='-')
                mi++;
            else
                oth++;
        }
        ll val=pls-mi;

        fixed
        precise

        if(abs(val-pnt)>oth)
            ans=0;
        else
        {
            ll tot=(1<<oth);

            ll diff=pnt-val;
            if(diff<0) diff=0;

            ll com=nCr(oth,diff);

            ans=com/(1.0*tot);

            //if((diff&&1)&&(oth&1));

            //else if((diff%2==0)&&(oth%2==0));
            //else
            //    ans=0;

        }

       /* if(oth==0)
        {
            if(pnt==val)
                ans=1;
            else
                ans=0;
        }*/

        cout<<ans<<en;

    }
    return 0;
}
