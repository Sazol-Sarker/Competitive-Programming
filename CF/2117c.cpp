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

        unordered_set<ll> st, stNew;
        ll ans = 1;
        st.insert(a[0]);

        for (ll i=1; i<n;i++)
        {
            if (st.find(a[i]) != st.end())
            {
                st.erase(a[i]);
            }


            stNew.insert(a[i]);
            if (st.empty())
                {
                    ans++;
                    st = stNew;
                    stNew.clear();
                }

        }
            cout <<ans<< endl;
    }

    return 0;
}
