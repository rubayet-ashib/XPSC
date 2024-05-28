#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    map<string, bool> mp;
    vector<string> v;

    while (t--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (!mp[v[i]])
        {
            string st = v[i].substr(v[i].size() - 2, 2);
            cout << st;
            mp[v[i]] = true;
        }
    }

    return 0;
}