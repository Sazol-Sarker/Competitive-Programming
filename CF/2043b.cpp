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
        cin>>n>>d;

        vector<int>ans;
        ans.push_back(1);

        ll sum=d*n;


        if(sum%3==0)
            ans.push_back(3);
        if(d==5)
            ans.push_back(5);
        if(d%7==0)
            ans.push_back(7);
        if(d%9==0)
            ans.push_back(9);

        for(auto it:ans)
        cout<<it<<" ";
        cout<<endl;
    }


    return 0;
}

