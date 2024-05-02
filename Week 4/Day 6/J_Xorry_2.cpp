#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void code()
{
    int x;
    cin >> x;
    int i = __lg(x) - 1, one = 0;
    for (i; i >= 0; i--)
    {

        if ((1 << i) & x)
            one++;
        if (one == 1)
            break;
    }

    int cnt = 0;
    for (i; i >= 0; i--)
    {
        if (((1 << i) & x) == 0)
            cnt++;
    }

    cout << (1 << cnt) << endl;
}

int main()
{
    fastIO();

    int t;
    cin >> t;
    while (t--)
    {
        code();
    }

    return 0;
}