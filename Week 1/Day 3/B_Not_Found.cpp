#include <bits/stdc++.h>
using namespace std;
bool found[200];

int main()
{
    string s;
    cin >> s;

    memset(found, false, sizeof(found));

    for (char x : s)
    {
        found[x] = true;
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        if (found[i] == false)
        {
            char ch = i;
            cout << ch;
            return 0;
        }
    }

    cout << "None";

    return 0;
}