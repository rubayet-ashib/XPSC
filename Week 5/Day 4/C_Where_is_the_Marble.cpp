#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void code(ll n, ll k)
{
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    while (k--)
    {
        ll key;
        cin >> key;

        auto it = find(a.begin(), a.end(), key);
        if (it != a.end())
        {
            ll pos = it - a.begin();
            cout << key << " found at " << pos + 1 << endl;
        }
        else
            cout << key << " not found" << endl;
    }
}

int main()
{
    fastIO();
    ll n, k, i = 1;
    while (cin >> n >> k)
    {
        if (n == 0 && k == 0)
            break;
        cout << "CASE# " << i << ":" << endl;
        code(n, k);
        i++;
    }

    return 0;
}