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

        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            m[x]++;
        }

        int distinct = m.size();

        if ((n - distinct) % 2 == 1)
            distinct--;

        cout << distinct << endl;
    }

    return 0;
}