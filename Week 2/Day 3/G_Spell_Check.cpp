#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> origin_v(125, 0);
    origin_v['T'] = 1;
    origin_v['i'] = 1;
    origin_v['m'] = 1;
    origin_v['u'] = 1;
    origin_v['r'] = 1;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        vector<int> exp_v(125, 0);
        for (int i = 0; i < n; i++)
        {
            exp_v[s[i]]++;
        }

        if (origin_v == exp_v)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}