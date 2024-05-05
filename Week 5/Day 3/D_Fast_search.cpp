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

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int k;
    cin >> k;
    while (k--)
    {
        int l_key, r_key;
        cin >> l_key >> r_key;

        int l = 0, r = n - 1, l_index = -1, r_index = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (l_key <= a[mid])
            {
                l_index = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (r_key >= a[mid])
            {
                r_index = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        if (l_index == -1 || r_index == -1)
            cout << "0" << " ";
        else
            cout << (r_index - l_index + 1) << " ";
    }
}

int main()
{
    fastIO();
    code();

    return 0;
}