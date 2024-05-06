#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
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

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int diff = INT_MIN;
        bool check = true;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] > a[i])
                check = false;

            diff = max(diff, (a[i] - b[i]));
        }

        if (!check)
            cout << "NO" << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                a[i] -= diff;
                if (a[i] < 0)
                    a[i] = 0;
            }
            if (a == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}