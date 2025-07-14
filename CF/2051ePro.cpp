#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        ll a[n], b[n];

        // Read input arrays
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n; i++) cin >> b[i];

        // Create sorted copies of `a` and `b` with original indices
        vector<pair<ll, ll>> sorted_a, sorted_b;
        for (ll i = 0; i < n; i++) {
            sorted_a.emplace_back(a[i], i);
            sorted_b.emplace_back(b[i], i);
        }

        sort(sorted_a.begin(), sorted_a.end());
        sort(sorted_b.begin(), sorted_b.end());

        // Create prefix count for negative reviews based on b
        vector<ll> neg_count(n + 1, 0);
        for (ll i = 0; i < n; i++) {
            neg_count[i + 1] = neg_count[i] + (a[sorted_b[i].second] > sorted_b[i].first);
        }

        ll ans = 0;

        // Iterate over all unique price points in `a`
        for (ll i = 0; i < n; i++) {
            ll price = sorted_a[i].first;

            // Count positive reviews
            ll positive_idx = lower_bound(sorted_a.begin(), sorted_a.end(), make_pair(price, 0LL)) - sorted_a.begin();
            ll positive_reviews = n - positive_idx;

            // Count valid negative reviews
            ll negative_idx = upper_bound(sorted_b.begin(), sorted_b.end(), make_pair(price, LLONG_MAX)) - sorted_b.begin();
            ll valid_negative_reviews = neg_count[negative_idx];

            // Limit negative reviews to `k`
            valid_negative_reviews = min(valid_negative_reviews, k);

            // Total sales = positive reviews + valid negative reviews
            ll total_sales = positive_reviews + valid_negative_reviews;
            ans = max(ans, total_sales * price);
        }

        // Output the maximum profit
        cout << ans << endl;
    }

    return 0;
}
