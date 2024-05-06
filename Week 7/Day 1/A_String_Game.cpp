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

    bool zlatan = false;

    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (!st.empty() && (st.top() != s[i]))
        {
            st.pop();
            if (zlatan)
            {
                zlatan = false;
            }
            else
                zlatan = true;
        }
        else
        {
            st.push(s[i]);
        }
    }

    if (zlatan)
        cout << "Zlatan" << endl;
    else
        cout << "Ramos" << endl;
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