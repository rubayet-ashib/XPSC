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
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int q;
    cin >> q;

    while (q--)
    {
        int m;
        cin >> m;

        int index = -1;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (m >= v[mid])
            {
                index = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }

        if (index == -1)
            cout << "0" << endl;
        else
            cout << (index + 1) << endl;
    }
}

int main()
{
    fastIO();
    code();

    return 0;
}