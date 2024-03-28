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

    ll n, s;
    cin >> n >> s;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, r = 0, ans = 0, sum = a[0];

    while (r < n && l < n)
    {

        if (sum <= s)
        {
            ans += r - l + 1;
            r++;
            sum += a[r];
        }
        else
        {
            sum -= a[l];
            l++;
        }
    }

    cout << ans;

    return 0;
}