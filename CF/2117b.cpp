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
        cin>>n;
        ll l=1,r=n;
        vector<ll>v;
        for(i=2; i<=n; i+=2)
        {
            if(i%2==0)
            v.push_back(i);
        }
        if(n%2==0)
            n--;
        for(i=n; i>=1; i-=2)
        {
            v.push_back(i);
        }
        for(auto it:v)
            cout<<it<<" ";
        cout<<endl;
    }


    return 0;
}

