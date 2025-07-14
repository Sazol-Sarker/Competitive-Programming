#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tc,n;
    cin>>tc;
    while (tc--)
    {
        cin>>n;
        ll a[n];
        for (ll i=0; i<n; i++)
        {
            cin>>a[i];
        }

        ll x,y,ok=1;

        // x*i+(n-i+1)*y= a[i]
        y=(2*a[0]-a[1])/(n+1);
        x=a[0]-n*y;

        for (ll i=0; i<n; i++)
        {
            if((i+1)*x+(n-i)*y==a[i]);
            else
                ok=0;

        }

        if(x<0||y<0)
            cout <<"no"<< endl;

        else{

        if(ok)
            cout <<"yes"<< endl;
        else
            cout <<"no"<< endl;
        }
    }

    return 0;
}
