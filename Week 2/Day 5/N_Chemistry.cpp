#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> v(26, 0);
        for (int i = 0; i < n; i++)
        {
            v[s[i] - 'a']++;
        }

        int odd = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] % 2 == 1)
                odd++;
        }

        if (odd == k || odd - k <= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}