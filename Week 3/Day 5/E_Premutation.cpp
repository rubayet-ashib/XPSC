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

    int a[n][n - 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cin >> a[i][j];
        }
    }

    map<int, pair<int, int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i][n - 2]].first++;
        mp[a[i][n - 2]].second = i;
    }

    int row, last_val;
    for (auto it : mp)
    {
        if (it.second.first == 1)
        {
            row = it.second.second;
        }
        else
        {
            last_val = it.first;
        }
    }

    vector<int> v;
    for (int i = 0; i < n - 1; i++)
    {
        v.push_back(a[row][i]);
    }
    v.push_back(last_val);

    for (int x : v)
        cout << x << " ";
    cout << endl;
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