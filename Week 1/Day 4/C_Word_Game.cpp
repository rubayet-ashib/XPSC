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

        map<string, int> m;
        vector<string> v;

        for (int i = 1; i <= 3 * n; i++)
        {
            string s;
            cin >> s;

            v.push_back(s);
        }

        for (string st : v)
        {
            if (m[st] >= 1)
                m[st]++;
            else
                m[st] = 1;
        }

        int score[3] = {0};

        for (int i = 2; i >= 0; i--)
        {
            for (int j = 1; j <= n; j++)
            {
                if (m[v.back()] == 1)
                    score[i] += 3;
                if (m[v.back()] == 2)
                    score[i] += 1;

                v.pop_back();
            }
        }

        for (int x : score)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}
