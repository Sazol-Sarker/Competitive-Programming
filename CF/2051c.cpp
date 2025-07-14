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
        ll n,m,k;
        cin>>n>>m>>k;


        ll a[m],q[k];
        for(i=0;i<m;i++)
        {
            cin>>a[i];
        }

        unordered_set<ll>st;

        for(i=0;i<k;i++)
        {
            cin>>q[i];
            st.insert(q[i]);
        }

        for(i=0;i<m;i++)
        {

            bool ache=0;
            if(st.find(a[i])!=st.end()) ache=1;
            st.insert(a[i]);
            if(st.size()==n)
            {
            cout<<1;

            }
            else
            {

            cout<<0;
            }
            if(!ache)
            st.erase(a[i]);
        }



       // for(i=0; i<n; i++)






        cout<<endl;
    }


    return 0;
}
