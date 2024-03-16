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

    int i = 0, j = 0;
    long long x = 0, y = 0, ans = 0, num = a[0];

    while (i < n && j < m)
    {
        while (b[j] <= num)
        {
            if (b[j] == num)
                y++;

            j++;

            if (j == m)
            {
                break;
            }
        }
        while (a[i] == num)
        {
            x++;
            i++;

            if (i == n)
            {
                break;
            }
        }

        num = a[i];
        ans += (x * y);
        x = 0;
        y = 0;
    }

    cout << ans;

    return 0;
}