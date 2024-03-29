#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, r = 0, ans = 0, mx, mn;
    multiset<ll> ml;

    while (r < n)
    {
        ml.insert(a[r]);
        mx = *ml.rbegin();
        mn = *ml.begin();

        if (mx - mn <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (l < r)
            {
                mx = *ml.rbegin(), mn = *ml.begin();

                if (mx - mn <= k)
                    break;

                auto it = ml.find(a[l]);
                ml.erase(it);
                l++;
            }
            mx = *ml.rbegin(), mn = *ml.begin();
            if (mx - mn <= k)
                ans += r - l + 1;
        }
        r++;
    }

    cout << ans;

    return 0;
}