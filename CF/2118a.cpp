#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tc,n,k;
    cin>>tc;
    while (tc--)
    {
        cin>>n>>k;


        for(ll i=0; i<n; i++)
        {
            if(k)
            {
                k--;
                cout <<1;
            }
            else
                cout <<0;
        }
        cout <<endl;
    }

    return 0;
}
