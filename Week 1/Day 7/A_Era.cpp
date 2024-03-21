#include <bits/stdc++.h>
#define ll long long
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        n++;

        ll a[n];
        a[0] = 0;
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
        }

        ll cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > (i + cnt))
            {
                ll x;
                x = a[i] - (i + cnt);
                cnt += x;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}