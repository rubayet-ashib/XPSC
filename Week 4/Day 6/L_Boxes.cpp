#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

// class cmp
// {
// public:
//     bool operator()(ll a, ll b)
//     {
//         return a < b;
//     }
// };

void code()
{
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    priority_queue<ll, vector<ll>> pq;
    pq.push(a.back());
    a.pop_back();
    while (!a.empty())
    {
        if (pq.top() >= a.back())
        {
            ll val = pq.top() ^ a.back();
            pq.pop();
            pq.push(val);
        }
        else
        {
            pq.push(a.back());
        }
        a.pop_back();
    }

    cout << pq.size() << endl;
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