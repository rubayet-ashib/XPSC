#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

vector<int> all_palindromes;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

// void store_palindrome()
// {
//     for (int i = 0; i < (1 << 15); i++)
//     {
//         string s1 = to_string(i);
//         string s2 = s1;

//         reverse(s2.begin(), s2.end());
//         if (s1 == s2)
//             all_palindromes.push_back(i);
//     }
// }

void store_palindrome()
{
    for (int i = 0; i < (1 << 15); i++)
    {
        string s = to_string(i);
        int len = s.size();

        bool ok = true;
        for (int j = 0; j < len / 2; j++)
        {
            if (s[j] != s[len - j - 1])
            {
                ok = false;
                break;
            }
        }
        if (ok)
            all_palindromes.push_back(i);
    }
}

void code()
{
    int n;
    cin >> n;

    int maxN = 1 << 15;
    vector<int> cnt(maxN), v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        cnt[v[i]]++;
    }

    ll ans = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < all_palindromes.size(); j++)
        {
            int curr = v[i] ^ all_palindromes[j];
            ans += cnt[curr];
        }
    }

    cout << (ans / 2) << endl;
}

int main()
{
    fastIO();
    store_palindrome();

    int t;
    cin >> t;
    while (t--)
    {
        code();
    }

    return 0;
}