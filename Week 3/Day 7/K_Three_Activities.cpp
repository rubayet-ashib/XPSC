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
    ll n;
    cin >> n;

    vector<ll> a1(n), a2(n), a3(n);
    for (int i = 0; i < n; i++)
        cin >> a1[i];
    for (int i = 0; i < n; i++)
        cin >> a2[i];
    for (int i = 0; i < n; i++)
        cin >> a3[i];

    vector<pair<ll, ll>> va(n), vb(n), vc(n);
    for (int i = 0; i < n; i++)
    {
        va.push_back({a1[i], i});
        vb.push_back({a2[i], i});
        vc.push_back({a3[i], i});
    }

    sort(va.begin(), va.end(), greater<>());
    sort(vb.begin(), vb.end(), greater<>());
    sort(vc.begin(), vc.end(), greater<>());

    ll ans = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (va[i].second != vb[j].second and va[i].second != vc[k].second and vb[j].second != vc[k].second)
                    ans = max(ans, va[i].first + vb[j].first + vc[k].first);
            }
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