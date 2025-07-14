#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    if(a.first==b.first)
        return a.second<b.second;

    return a.first<b.first;
}


int main()
{
    ll t,n,m,d,k,i,j,x,y;
    cin>>t;
    while(t--)
    {
        ll n,m1,m2;
        cin>>n>>m1>>m2;
        set<pair<ll,ll>>stf;
        set<pair<ll,ll>>stg;
        vector<pair<ll,ll>>v;
        for(i=0; i<m1; i++)
        {
            cin>>x>>y;
            stf.insert({x,y});

        }
        ll ans=0;
        for(i=0; i<m2; i++)
        {
            cin>>x>>y;
            if (stf.find({x, y}) == stf.end())
            {
                stf.insert({x,y});
                ans++;
            }
            stg.insert({x,y});


        }

        if(m2==0)
            cout<<m1<<endl;
        else
        {
            for(auto it:stf)
                if(stg.find({it.first,it.second})==stg.end())
                {
                    ans++;
                }
          //  ll sz=stg.size();


            cout<<ans<<endl;
        }





    }


    return 0;
}

