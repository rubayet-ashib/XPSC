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

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            int m;
            string s;
            cin >> m >> s;

            int plus = 0, minus = 0, num = a[i];
            for (int j = 0; j < m; j++)
            {
                if (s[j] == 'D' && num == 9)
                    num = 0;
                else if (s[j] == 'D')
                    num++;
                else if (s[j] == 'U' && num == 0)
                    num = 9;
                else
                    num--;
            }

            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}