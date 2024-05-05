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

    vector<int> v(n);
    vector<int> sum(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
            sum[i] = v[i];
        else
            sum[i] = sum[i - 1] + v[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;

        int l = 0, r = n - 1, ans = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (m <= sum[mid])
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        cout << (ans + 1) << endl;
    }
}

int main()
{
    fastIO();
    code();

    return 0;
}