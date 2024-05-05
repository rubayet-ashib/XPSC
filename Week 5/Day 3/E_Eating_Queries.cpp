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
    int n, q;
    cin >> n >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());
    vector<ll> sum(n);
    sum[0] = v[0];
    for (int i = 1; i < n; i++)
        sum[i] = sum[i - 1] + v[i];

    while (q--)
    {
        ll x;
        cin >> x;

        auto it = lower_bound(sum.begin(), sum.end(), x);
        if (it != sum.end())
        {
            int index = it - sum.begin();
            cout << (index + 1) << endl;
        }
        else
            cout << "-1" << endl;
    }
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