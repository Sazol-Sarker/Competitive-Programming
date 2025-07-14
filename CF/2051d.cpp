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
        ll n,x,y;
        cin>>n>>x>>y;


        ll a[n],sum=0,ans=0,mn,mx;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);

        for(i=0;i<n-1;i++)
        {
            ll l=i+1,r=n-1,low,hi;

            mn=sum-y;
            mx=sum-x;

            while(l<=r)
            {
                ll mid=l+(r-l)/2;

                if(a[i]+a[mid]>=mn)
                {
                    r=mid-1;
                }
                else l=mid+1;

            }
            low=l;

            l=i+1;
            r=n-1;
            while(l<=r)
            {
                ll mid=l+(r-l)/2;
                if(a[i]+a[mid]<=mx)
                {
                    l=mid+1;
                }
                else r=mid-1;

            }
            hi=r;


            ans+=max(0LL,hi-low+1);



        }



        cout<<ans<<endl;
    }


    return 0;
}
