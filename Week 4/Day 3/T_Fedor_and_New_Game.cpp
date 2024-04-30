#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int check_on_bits(int x, int k)
{
    return (x >> k) & 1;
}

void code()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(m + 1);
    for (int i = 0; i <= m; i++)
        cin >> v[i];

    int fedor = v[m];
    int ans = 0;

    for (int i = 0; i < v.size() - 1; i++)
    {
        int x = fedor ^ v[i];
        int cnt = 0;
        for (int k = 0; k < n; k++)
        {
            if (check_on_bits(x, k))
                cnt++;
        }

        if (cnt <= k)
            ans++;
    }

    cout << ans;
}

int main()
{
    fastIO();
    code();

    return 0;
}