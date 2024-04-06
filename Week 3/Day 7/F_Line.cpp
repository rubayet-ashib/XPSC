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
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<ll> minus;
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        ll L = i;
        ll R = n - i - 1;

        if (L == R)
        {
            sum += L;
            minus.push_back(L - R);
        }

        if (s[i] == 'L' && R > L)
        {
            sum += R;
            minus.push_back(R - L);
        }

        if (s[i] == 'L' && L > R)
        {
            sum += L;
        }

        if (s[i] == 'R' && L > R)
        {
            sum += L;
            minus.push_back(L - R);
        }

        if (s[i] == 'R' && R > L)
        {
            sum += R;
        }
    }

    vector<ll> ans(n, sum);

    if (!minus.empty())
    {
        sort(minus.begin(), minus.end());
        minus.pop_back();
    }

    if (!minus.empty())
    {
        sort(minus.begin(), minus.end(), greater<ll>());

        for (int i = minus.size() - 1; i >= 0; i--)
        {
            sum -= minus[i];
            ans[i] = sum;
        }
    }

    for (auto x : ans)
        cout << x << " ";
    cout << endl;
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