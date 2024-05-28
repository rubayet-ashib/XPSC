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
    int n, m, h;
    cin >> n >> m >> h;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());

    ll ans = 0;
    for (int i = 0; i < min(n, m); i++)
    {
        ans += min(1LL * a[i], 1LL * b[i] * h);
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