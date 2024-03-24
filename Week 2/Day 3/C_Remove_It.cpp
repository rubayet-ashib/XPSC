#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    ll x;
    cin >> n >> x;

    vector<ll> a;

    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;

        if (val != x)
            a.push_back(val);
    }

    for (auto v : a)
        cout << v << " ";

    return 0;
}