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

    int req = 0, pr = 0;
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (s[l] == s[r])
            pr++;
        else
            req++;

        l++;
        r--;
    }

    bool odd = false;
    if (n % 2 == 1)
        odd = true;

    string ans = "";
    for (int i = 0; i < n + 1; i++)
    {
        int total = i;
        total -= req;

        if (total < 0)
            ans.push_back('0');
        else
        {
            int extra = total % 2;

            if ((2 * pr - (total - extra)) >= 0)
            {
                if (extra && odd)
                    ans.push_back('1');
                else if (extra && !odd)
                    ans.push_back('0');
                else
                    ans.push_back('1');
            }
            else
                ans.push_back('0');
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