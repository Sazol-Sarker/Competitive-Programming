#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> a(n, vector<ll>(m));
        ll globalMax = LLONG_MIN;
        vector<pair<ll, ll>> maxPositions;

        vector<ll> rowMax(n, LLONG_MIN), colMax(m, LLONG_MIN);

        // Read input and compute rowMax, colMax, and globalMax
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
                rowMax[i] = max(rowMax[i], a[i][j]);
                colMax[j] = max(colMax[j], a[i][j]);

                if (a[i][j] > globalMax)
                {
                    globalMax = a[i][j];
                    maxPositions.clear();
                    maxPositions.push_back({i, j});
                }
                else if (a[i][j] == globalMax)
                {
                    maxPositions.push_back({i, j});
                }
            }
        }

        ll result = LLONG_MAX;

        for (auto [r, c] : maxPositions)
        {
            // Simulate decrease at row r and column c
            ll tempMax = 0;

            for (ll i = 0; i < n; i++)
            {
                if (i == r) continue;
                tempMax = max(tempMax, rowMax[i]);
            }

            for (ll j = 0; j < m; j++)
            {
                if (j == c) continue;
                tempMax = max(tempMax, colMax[j]);
            }

            // Also check rowMax[r]-1 and colMax[c]-1 (since they are decreased)
            tempMax = max(tempMax, rowMax[r] - 1);
            tempMax = max(tempMax, colMax[c] - 1);

            result = min(result, tempMax);
        }

        cout << result << "\n";
    }

    return 0;
}
