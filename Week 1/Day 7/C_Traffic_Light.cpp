#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;

        if (c == 'g')
        {
            cout << "0" << endl;
            continue;
        }

        s += s;

        vector<int> v;
        for (int i = 0; i < 2 * n; i++)
        {
            if (s[i] == 'g')
                v.push_back(i);
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                vector<int>::iterator pos = upper_bound(v.begin(), v.end(), i);
                int index = pos - v.begin();

                ans = max(ans, v[index] - i);
            }
        }

        cout << ans << endl;
    }

    return 0;
}