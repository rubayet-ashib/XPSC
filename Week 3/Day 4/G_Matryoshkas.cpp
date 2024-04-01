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
    int n;
    cin >> n;

    map<ll, ll> mp;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    sort(a, a + n);

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] != 0)
        {
            ll x = a[i];
            while (mp[x] > 0)
            {
                mp[x]--;
                x++;
            }
            ans++;
        }
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