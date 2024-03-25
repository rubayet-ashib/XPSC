#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        // if (n == 1)
        // {
        //     cout << "0" << endl;
        //     continue;
        // }

        map<int, int> m;

        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }

        int mx = INT_MIN;

        for (auto it : m)
        {
            mx = max(mx, it.second);
        }

        // Process start
        int elmnt = n - mx;

        if (elmnt == 0)
        {
            cout << "0" << endl;
            continue;
        }

        int step = 0, ans = 0;

        while (elmnt >= mx)
        {
            elmnt -= mx;
            ans += mx;
            step++;
            mx *= 2;
        }

        if (elmnt == 0)
            ans += step + elmnt;
        else
            ans += step + elmnt + 1;

        cout << ans << endl;
    }

    return 0;
}