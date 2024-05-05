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
        cin >> a[i];

    while (k--)
    {
        int key;
        cin >> key;

        int l = 0, r = n - 1, idx = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (key >= a[mid])
            {
                idx = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << idx + 1 << endl;
    }
}

int main()
{
    fastIO();
    code();

    return 0;
}