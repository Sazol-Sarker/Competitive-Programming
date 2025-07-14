#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> nums(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());
        ll score = 0;


        ll left = 0, right = n - 1;

        while (left < right)
        {
            ll sum = nums[left] + nums[right];

            if (sum == k)
            {

                score++;
                left++;
                right--;
            }
            else if (sum < k)
            {

                left++;
            }
            else
            {

                right--;
            }
        }


        cout << score<< endl;
    }

    return 0;
}
