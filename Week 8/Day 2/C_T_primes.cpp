#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

const int N = 1e6 + 5;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

vector<bool> primeSieve(ll n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    vector<bool> check_prime(n, false);

    for (ll i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
            for (ll j = i * i; j <= n; j += i)
                isPrime[j] = false;
    }

    for (ll i = 2; i <= n; i++)
        if (isPrime[i])
            check_prime[i] = true;

    return check_prime;
}

bool isPerfectSquare(ll n)
{
    ll x = sqrtl(n);
    return (x * x) == n;
}

void code(vector<bool> isPrime)
{
    ll x;
    cin >> x;

    if (isPerfectSquare(x) && isPrime[sqrtl(x)])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    fastIO();
    vector<bool> isPrime = primeSieve(N);

    int t;
    cin >> t;
    while (t--)
    {
        code(isPrime);
    }

    return 0;
}