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
        ll n,k;
        cin>>n>>k;

        ll a[n],b[n],mn=INT_MAX,ans=0;
        set<ll>st;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            st.insert(a[i]);
            mn=min(mn,a[i]);
        }
        vector<pair<ll,ll>>v;

        for(i=0;i<n;i++)
        {
            cin>>b[i];
            st.insert(b[i]);
            v.push_back({a[i],b[i]});

        }
       // ans=mn*n;

       // sort(v.begin(),v.end(),cmp);

       //sort arr a,b , cnt negative rev and profit

       sort(a,a+n);
       sort(b,b+n);

        for(auto it:st)
        {
            ll num=it;
            auto idx1=lower_bound(a,a+n,num);

            auto idx2=lower_bound(b,b+n,num);//neg
            if(idx1!=(a+n))
            {
               ll ind1=idx1-a;
                ans=max(ans,(n-ind1)*a[ind1]);
                    cout<<"ans+ "<<ans<<endl;
            }
            if(idx2!=(b+n))
            {
                ll ind2=idx2-b;
                ll tym=n-ind2;
                if(tym<=k)
                {
                    ans=max(ans,b[ind2]*(n-ind2));
                    cout<<"ans++ "<<ans<<endl;
                }
            }
        cout<<it<<"   "<<ans<<endl;
        }




    }


    return 0;
}
