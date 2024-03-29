#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool vis[200];
        memset(vis, false, sizeof(vis));

        for (int i = 0; i < n; i++)
        {
            s[i] = tolower(s[i]);
        }

        int i = 0;
        char x = s[0];
        vector<char> v;
        bool same = false;
        while (i < s.size())
        {
            if (s[i] != x)
            {
                if (vis[s[i]] == true)
                {
                    same = true;
                    break;
                }
                v.push_back(x);
                vis[x] = true;
                x = s[i];
            }
            i++;
        }
        v.push_back(s[i - 1]);

        vector<char> v1 = {'m', 'e', 'o', 'w'};

        if (same)
            cout << "NO" << endl;
        else if (v == v1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}