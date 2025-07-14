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
        cin>>n;
        ll a[n], b[n];
        string s;


        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
            cin>>b[i];

        ll sum1=0,sum2=0;

        ll ind=0,ind1=1;
         for(i=0; i<n-1; i++)
        {
            if(a[i]>b[i+1])
            {
                sum1+=a[i];

                sum2+=b[i+1];

            }

        }
        sum1+=a[n-1];



        cout<<abs(sum1-sum2)<<endl;
    }


    return 0;
}
