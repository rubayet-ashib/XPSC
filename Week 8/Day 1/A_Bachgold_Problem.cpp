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

    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        for (int i = 1; i <= n / 2; i++)
            cout << "2 ";

        return;
    }

    vector<int> ans;
    while (n != 3)
    {
        ans.push_back(2);
        n -= 2;
    }
    cout << ans.size() + 1 << endl;
    for (int x : ans)
        cout << x << " ";
    cout << "3";
}

int main()
{
    fastIO();
    code();

    return 0;
}