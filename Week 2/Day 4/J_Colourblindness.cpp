#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int col;
        cin >> col;

        string s1, s2;
        cin >> s1 >> s2;

        bool ans = true;

        for (int i = 0; i < col; i++)
        {
            if (s1[i] != 'R')
                s1[i] = 'G';
            if (s2[i] != 'R')
                s2[i] = 'G';

            if (s1[i] != s2[i])
            {
                ans = false;
                break;
            }
        }

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}