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
        cin>>n;
        ll a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];

        }
        ll ok=1;
        for(i=1; ok&&i<n; i++)
        {
            //if(a[i-1]>=a[i])
            //{
            ll d=min(a[i-1],a[i]);
            a[i-1]-=d;
            a[i]-=d;
            if(a[i-1]>a[i])
            {

                ok=0;
                break;
            }
            //}
            /*cout<<"i "<<i<<endl;
                   for(int j=0;j<n;j++)
                       cout<<a[j]<<" ";
                   cout<<endl;*/
        }
        if(ok)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;






    }


    return 0;
}

