#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int turn_off_kth_bit(int x, int k)
{
    return x & ~(1 << k);
}

void code()
{
    int n;
    cin >> n;

    int lb = __lg(n);
    for (int i = 0; i < lb; i++)
    {
        if ((n >> i) & 1 == 1)
            n = turn_off_kth_bit(n, i);
    }

    cout << n - 1 << endl;
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