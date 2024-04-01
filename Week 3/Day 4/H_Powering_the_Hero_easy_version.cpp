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
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    priority_queue<ll, vector<ll>> pq;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            pq.push(a[i]);
        }
        else
        {
            if (!pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
        }
    }

    cout << ans << endl;
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