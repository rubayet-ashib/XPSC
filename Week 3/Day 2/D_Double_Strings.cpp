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

    vector<string> v(n);
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = true;
    }

    for (int i = 0; i < v.size(); i++)
    {
        bool flag = false;
        for (int j = 1; j < v[i].size(); j++)
        {

            string s1 = v[i].substr(0, j);
            string s2 = v[i].substr(j, v[i].size() - 1);

            if (mp[s1] && mp[s2])
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "1";
        else
            cout << "0";
    }
}

int main()
{
    fastIO();

    int t;
    cin >> t;
    while (t--)
    {
        code();
        cout << endl;
    }

    return 0;
}