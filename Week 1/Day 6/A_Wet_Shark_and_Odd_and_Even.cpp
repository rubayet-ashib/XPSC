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

    int n;
    cin >> n;

    ll sum = 0;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a + n);

    if (sum % 2 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 1)
            {
                sum -= a[i];
                break;
            }
        }
    }

    cout << sum;

    return 0;
}
