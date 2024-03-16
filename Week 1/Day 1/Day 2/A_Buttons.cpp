#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int coin = max(a, b);

    if (max(a, b) - 1 > min(a, b))
        coin += (max(a, b) - 1);
    else
        coin += min(a, b);

    cout << coin;

    return 0;
}