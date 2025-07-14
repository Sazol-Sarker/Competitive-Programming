#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    if(a.first==b.first)
        return a.second<b.second;

    return a.first<b.first;
}

ll f( vector<ll>&arr,vector<ll>&tmp,vector<ll>&dp,int ind)
{
    if(ind==arr.size())
    {
        ll mx=*max_element(tmp.begin(),tmp.end());


    }
    if(dp[ind]!=-1)
        return dp[ind];


}


int main()
{
    ll t,n,m,d,k,i,j,x,y;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>>v(n,vector<ll>(m));
        vector<pair<ll,ll>>col;
        vector<ll>ans;
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
            {

                cin>>v[i][j];

                if(j+1==m)
                {

                    sort(v[i].begin(),v[i].end());
                }
            }

            for(i=0; i<n; i++)
                    col.push_back({v[i][0],i});

        sort(col.begin(),col.end(),cmp);
        for(i=0; i<n; i++)
        {
            ans.push_back(col[i].second);
        }

        vector<ll>num;
        bool ok=1;
        for(j=0; j<m&&ok; j++)
        {
            for(i=1; i<n&&ok; i++)
            {
                if(v[ans[i]][j]>v[ans[i-1]][j]);
                else
                {
               // cout<<"up"<<"+++ "<<v[ans[i]][j]<<" "<< v[ans[i-1]][j]<<endl;

                    ok=0;
                }
            }
            if(j+1<m)
            {

            if(v[ans[0]][j+1]> v[ans[n-1]][j]);
            else
            {
              //  cout<<"last"<<"+++ "<<v[ans[0]][j+1]<<" "<< v[ans[n-1]][j] <<endl;
                ok=0;
            }
            }
        }



        if(ok)
        {
              for(auto it:ans)
                cout<<it+1<<" ";
            cout<<endl;
        }
        else
            cout<<-1<<endl;




        // cout<<ans<<endl;
    }


    return 0;
}

