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

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll q;
    cin >> q;

    while (q--)
    {
        ll key;
        cin >> key;

        auto it = lower_bound(a.begin(), a.end(), key);
        ll l_ans = it - a.begin();

        if (l_ans - 1 < 0)
            cout << "X ";
        else
            cout << a[l_ans - 1] << " ";

        it = upper_bound(a.begin(), a.end(), key);
        ll r_ans = it - a.begin();

        if (r_ans > n - 1)
            cout << "X" << endl;
        else
            cout << a[r_ans] << endl;
    }
}

int main()
{
    fastIO();
    code();

    return 0;
}