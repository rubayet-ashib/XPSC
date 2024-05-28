#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

ll leaf_finder(ll root, ll parent, ll leaf_list[], vector<ll> tree[])
{
    if (tree[root].size() == 1 && tree[root][0] == parent)
    {
        leaf_list[root] = 1;
        return 1;
    }

    for (ll child : tree[root])
    {
        if (child != parent)
        {
            ll val = leaf_finder(child, root, leaf_list, tree);
            leaf_list[root] += val;
        }
    }

    return leaf_list[root];
}

void code()
{
    ll n;
    cin >> n;

    vector<ll> tree[n + 1];

    ll e = n - 1;
    while (e--)
    {
        ll a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }

    ll leaf_list[n + 1];
    memset(leaf_list, 0, sizeof(leaf_list));

    leaf_finder(1, -1, leaf_list, tree);

    ll q;
    cin >> q;

    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        cout << leaf_list[x] * leaf_list[y] << endl;
    }
}

int main()
{
    fastIO();

    ll t;
    cin >> t;

    while (t--)
    {
        code();
    }

    return 0;
}
