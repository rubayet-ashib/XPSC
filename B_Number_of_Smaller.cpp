#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int n, m;
    cin >> n >> m;

    long long a[n], b[m];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int i = 0, j = 0, ans = 0, cnt = 0;

    while (j < m)
    {
        if (i == n)
        {
            cout << n << " ";
            j++;
            continue;
        }

        if (a[i] < b[j])
        {
            cnt++;
            i++;
        }
        else
        {
            ans += cnt;
            cnt = 0;
            j++;
            cout << ans << " ";
        }
    }

    return 0;
}