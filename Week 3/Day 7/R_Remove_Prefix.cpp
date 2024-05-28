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

    map<int, int> mp;
    int prefix = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[a[i]] > 0)
            break;
        else
        {
            prefix++;
            mp[a[i]]++;
        }
    }

    cout << n - prefix << endl;
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