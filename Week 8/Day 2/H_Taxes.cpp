#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool isPrime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;

    return true;
}

void code()
{
    ll n;
    cin >> n;

    if (isPrime(n))
        cout << "1";
    else if (n % 2 == 0)
        cout << "2";
    else
    {
        if (isPrime(n - 2))
            cout << "2";
        else
            cout << "3";
    }
}

int main()
{
    fastIO();
    code();

    return 0;
}