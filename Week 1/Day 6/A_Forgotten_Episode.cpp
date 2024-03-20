#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;

    ll get_sum = 0;

    int c = n - 1;
    while (c--)
    {
        int x;
        cin >> x;

        get_sum += x;
    }

    ll req_sum = 0;

    for (int i = 1; i <= n; i++)
    {
        req_sum += i;
    }

    cout << req_sum - get_sum;

    return 0;
}