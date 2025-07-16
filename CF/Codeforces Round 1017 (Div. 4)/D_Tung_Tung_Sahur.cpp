#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define en '\n'

// Fast I/O
void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

// Comparator for sorting vector of pairs
bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    // Example: Sort by first ascending, then second descending
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    fast_io();

    ll tc;
    cin >> tc;
    while (tc--)
    {
        // cout << "TC=> " << tc << en;
        string p, s;
        cin >> p >> s;
        ll lp = 0, ls = 0, psz = p.size(), ssz = s.size();
        ll cntp = 0, cnts = 0, ok = 1;

        while (lp < psz && ls < ssz && ok)
        {
            char ch = p[lp];
            while (p[lp] == ch && lp < psz)
            {
                cntp++;
                lp++;
            }
            while (s[ls] == ch && ls < ssz)
            {
                cnts++;
                ls++;
            }

            if (cnts >= cntp && cnts <= 2 * cntp)
            {
                cnts = 0;
                cntp = 0;
            }
            else
                ok = 0;

            
            // cout << cntp << " " << cnts << endl;
        }
        if(lp < psz || ls < ssz)
            ok = 0;
        if (cnts >= cntp && cnts <= 2 * cntp)
            ;
        else
            ok = 0;

        // cout << cntp << " " << cnts << endl;
        if (ok)
            cout << "YES" << en;
        else
            cout << "NO" << en;
    }

    return 0;
}
