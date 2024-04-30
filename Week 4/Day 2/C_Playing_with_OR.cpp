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
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = 0, ans = 0, odd = 0;

    while (r < n)
    {
        if (a[r] % 2 == 1)
            odd++;

        if (r - l + 1 == k)
        {
            if (odd > 0)
                ans++;

            if (a[l] % 2 == 1)
                odd--;

            l++;
        }
        r++;
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