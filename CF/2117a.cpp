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
    ll tc,n,m,d,k,i,j,x,y;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>x;
        ll a[n];
        ll tmp=0;
        vector<ll>v;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i])
            {
                v.push_back(i);
            }


        }



        if(v.size()==0)
        {

            cout<<"YES"<<endl;
        }
        else
        {
            ll sz=v.size();
            //if(abs(v[0]-v[sz-1]+1)<=x)
            if(v[0]+x>v.back())
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

        // cout<<ans<<endl;
    }


    return 0;
}

