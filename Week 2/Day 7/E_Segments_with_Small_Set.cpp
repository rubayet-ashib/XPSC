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

    ll l = 0, r = 0, ans = 0;
    map<ll, ll> mp;

    while (r < n)
    {
        mp[a[r]]++;

        if (mp.size() <= k)
            ans += (r - l + 1);

        else if (mp.size() > k)
        {
            while (mp.size() > k)
            {
                mp[a[l]]--;
                if (mp[a[l]] == 0)
                    mp.erase(a[l]);

                l++;
            }

            if (mp.size() <= k)
                ans += (r - l + 1);
        }
        r++;
    }

    cout << ans;

    return 0;
}