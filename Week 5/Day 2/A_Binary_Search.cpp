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

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    while (k--)
    {
        ll key;
        cin >> key;

        int l = 0, r = n - 1;
        bool ans = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (key == a[mid])
            {
                ans = true;
                break;
            }
            else if (key < a[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    fastIO();
    code();

    return 0;
}