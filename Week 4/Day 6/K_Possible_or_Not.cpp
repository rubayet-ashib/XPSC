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

    int AND = -1;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] & k) == k)
            AND &= a[i];
    }

    if (AND == k)
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