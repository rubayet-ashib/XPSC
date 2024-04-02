#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void code()
{
    ll n, k, q;
    cin >> n >> k >> q;

    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, r = 0, ans = 0;
    while (r < n)
    {
        if (a[r] <= q)
        {
            if ((r - l + 1) >= k)
                ans += (r - l + 1) - (k - 1);
        }
        else
        {
            l = r + 1;
        }
        r++;
    }

    cout << ans << endl;
}

int main()
{
    fastIO();

    int t;
    cin >> t;
    while (t--)
    {
        code();
    }

    return 0;
}