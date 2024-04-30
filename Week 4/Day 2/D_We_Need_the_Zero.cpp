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

    int a[n], x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        x ^= a[i];
    }

    for (int i = 0; i < n; i++)
    {
        a[i] ^= x;
    }

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res ^= a[i];
    }

    if (res == 0)
        cout << x << endl;
    else
        cout << "-1" << endl;
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