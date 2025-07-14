#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tc,n,s;
    cin>>tc;
    while (tc--)
    {
        cin>>n>>s;
        ll a[n],ans=0;


        for(ll i=0; i<n; i++)
        {

            cin>>a[i];
        }
        ans=a[n-1]-a[0];

        if(s<a[0])
            ans=a[n-1]-s;
        else if(s>a[n-1])
            ans=s-a[0];
        // cout<<s-a[0]<<endl;
        else
            ans+=min(s-a[0],a[n-1]-s);
        cout<<ans<<endl;
        //cout <<a[n-1]+min(s-a[0],a[n-1]-s)-1<<endl;
    }

    return 0;
}

