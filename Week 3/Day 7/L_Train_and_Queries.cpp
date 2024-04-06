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
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    map<ll, vector<ll>> m;

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]].push_back(i);
    }

    while (k--)
    {
        ll a, b;
        cin >> a >> b;

        auto itA = m.find(a);
        auto itB = m.find(b);
        if (itA != m.end() && itB != m.end())
        {
            int i1 = itA->second.front();
            int i2 = itB->second.back();

            if (itA->second == itB->second)
                cout << "YES" << endl;
            else if (i1 < i2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    fastIO();

    ll t;
    cin >> t;
    while (t--)
    {
        code();
    }

    return 0;
}