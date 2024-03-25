#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<char> v;
        v.push_back(s[0]);

        for (int i = 1; i < n; i++)
        {
            if ((v.back() == '(' && s[i] == ')'))
                v.pop_back();
            else
                v.push_back(s[i]);
        }

        cout << (v.size() / 2) << endl;
    }

    return 0;
}