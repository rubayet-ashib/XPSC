#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fastIO();

    int a, b;
    cin >> a >> b;

    if (b - a <= 0)
        cout << "0";
    else
        cout << b - a + 1;

    return 0;
}