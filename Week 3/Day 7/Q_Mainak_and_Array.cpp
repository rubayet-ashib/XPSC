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

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ans = 0;

    // Last element stable
    for (int i = 0; i < n - 1; i++)
        ans = max(ans, v[n - 1] - v[i]);

    // First element stable
    for (int i = 1; i < n; i++)
        ans = max(ans, v[i] - v[0]);

    // Otherwise
    for (int i = 0; i < n - 1; i++)
        ans = max(ans, v[i] - v[i + 1]);

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