#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

bool checkPalindrome(vector<int> v, int x)
{
    vector<int> v1, v2;
    for (int val : v)
    {
        if (val != x)
        {
            v1.push_back(val);
            v2.push_back(val);
        }
    }

    reverse(v2.begin(), v2.end());

    if (v1 == v2)
        return true;
    else
        return false;
}

int main()
{
    fastIO();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int i = 0, j = n - 1;
        bool kalindrome = true;
        while (i < j)
        {
            if (v[i] != v[j])
            {
                kalindrome = checkPalindrome(v, v[i]) || checkPalindrome(v, v[j]);
                break;
            }
            i++;
            j--;
        }

        if (kalindrome)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}