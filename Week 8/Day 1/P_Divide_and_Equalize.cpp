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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j * j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                while (a[i] % j == 0)
                {
                    cnt[j]++;
                    a[i] /= j;
                }
            }
        }

        if (a[i] > 1)
            cnt[a[i]]++;
    }

    bool possible = true;
    for (auto [x, y] : cnt)
    {
        if (y % n != 0)
        {
            possible = false;
            break;
        }
    }

    if (possible)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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