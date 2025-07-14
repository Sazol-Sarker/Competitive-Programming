#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tc,n,k;
    cin>>tc;
    while (tc--)
    {
        string s;
        cin>>n>>s;
        bool ok=0;

        map<char,ll>mp;
        for(ll i=0; !ok&& i<n; i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]>=3)
            {
                ok=1;
            }
            if(i)
            {
                if(s[i]==s[i-1])
                {
                    ok=1;
                }
            }
        }
        ll cnt=0;
        if(s[0]==s[n-1])
        mp[s[0]]--;
        //mp[s[n-1]]--;
        for(auto it:mp)
            if(it.second>=2) cnt++;

        if(ok|| cnt)
            cout <<"yes"<<endl;
        else
            cout <<"no"<<endl;
    }

    return 0;
}

