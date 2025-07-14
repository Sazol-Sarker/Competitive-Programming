
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(const pair<ll,pair<ll,ll>>&a,const pair<ll,pair<ll,ll>>&b)
{
    return a.first<b.first;
}

int main()
{
    ll tc,n;
    cin>>tc;
    while (tc--)
    {
        cin>>n;
        ll a[n];
        vector<vector<ll>>v;
        /*for(ll i=1;i<=n;i++){
            a[i-1]=i;
        }*/

        vector<pair<ll,pair<ll,ll>>>ans;
        for(ll i=1; i<=n; i++)
        {
            ll lft=i;
            ll ryt=lft+1;
               // ans.push_back(make_pair(i,make_pair(1,n)));
            if(lft>1)
            {
                ans.push_back(make_pair(i,make_pair(1,lft)));
               // cout<<i<<" "<<1<<" "<<d<<endl;
            }
             if(ryt<n)
            {

                ans.push_back(make_pair(i,make_pair(ryt,n)));
                //cout<<i<<" "<<d+1<<" "<<n<<endl;
            }


        }
      //  sort(ans.begin(),ans.end(),cmp);
        cout<<ans.size()<<endl;
        for(auto it:ans)
        {
            cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<endl;
        }

    }


    return 0;
}
