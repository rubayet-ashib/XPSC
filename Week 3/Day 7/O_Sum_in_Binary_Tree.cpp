#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

ll sum = 0;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void findSum(ll n)
{

    if (n == 0)
        return;

    sum += n;
    findSum(n / 2);
}

void code()
{
    ll n;
    cin >> n;

    findSum(n);
    cout << sum << endl;

    sum = 0;
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