#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (c % a == 0 || c % b == 0)
    {
        cout << "Yes";
        return 0;
    }

    int i = 1;

    while (1)
    {
        int x;
        x = c - (a * i);

        if (x < 0)
            break;

        if (x % b == 0)
        {
            cout << "Yes";
            return 0;
        }

        i++;
    }

    cout << "No";

    return 0;
}