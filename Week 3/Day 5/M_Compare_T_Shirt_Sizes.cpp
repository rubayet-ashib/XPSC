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
    string s1, s2;
    cin >> s1 >> s2;

    vector<char> a;
    vector<char> b;

    for (char x : s1)
        a.push_back(x);
    for (char x : s2)
        b.push_back(x);

    char ans = ' ';
    if (a.back() == 'L' && (b.back() == 'M' || b.back() == 'S'))
        ans = '>';
    else if (a.back() == 'L' && b.back() == 'L')
        if (a.size() == b.size())
            ans = '=';
        else if (a.size() > b.size())
            ans = '>';
        else
            ans = '<';
    else if (a.back() == 'M' && b.back() == 'S')
        ans = '>';
    else if (a.back() == 'M' && b.back() == 'L')
        ans = '<';
    else if (a.back() == 'M' && b.back() == 'M')
        if (a.size() == b.size())
            ans = '=';
        else if (a.size() > b.size())
            ans = '<';
        else
            ans = '>';
    else if (a.back() == 'S' && (b.back() == 'M' || b.back() == 'L'))
        ans = '<';
    else if (a.back() == 'S' && b.back() == 'S')
        if (a.size() == b.size())
            ans = '=';
        else if (a.size() > b.size())
            ans = '<';
        else
            ans = '>';

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