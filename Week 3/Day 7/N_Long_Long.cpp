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

    ll a[n], prefix_sum[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (i == 0)
            prefix_sum[i] = abs(a[i]);
        else
            prefix_sum[i] = prefix_sum[i - 1] + abs(a[i]);
    }

    int cnt = 0;
    int i = 0;
    while (i < n)
    {
        if (a[i] < 0)
        {
            cnt++;
            while (a[i] <= 0 && i < n)
            {
                i++;
            }
        }
        i++;
    }

    cout << prefix_sum[n - 1] << " " << cnt << endl;
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