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

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, q;
        cin >> n >> q;

        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            if (i == 0)
                a[i] = x;
            else
                a[i] = a[i - 1] + x;
        }

        while (q--)
        {
            ll l, r, k, ans;
            cin >> l >> r >> k;

            if (l > 1)
                ans = a[n - 1] - (a[r - 1] - a[l - 2]) + (k * (r - l + 1));
            else
                ans = a[n - 1] - a[r - 1] + (k * (r - l + 1));

            if (ans % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}