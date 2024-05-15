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
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll ans = (n / a) * p;
    ans += (n / b) * q;

    ll same = n / ((a / __gcd(a, b)) * b);

    if (p <= q)
        ans -= same * p;
    else
        ans -= same * q;

    cout << ans;
}

int main()
{
    fastIO();
    code();

    return 0;
}