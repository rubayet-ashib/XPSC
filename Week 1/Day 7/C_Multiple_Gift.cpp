#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll x, y;
    cin >> x >> y;

    ll len = 0;

    while (x <= y)
    {
        len++;
        x *= 2;
    }

    cout << len;

    return 0;
}