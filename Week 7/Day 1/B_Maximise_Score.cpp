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

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int score[n];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            score[i] = abs(a[i] - a[i + 1]);
        else if (i == n - 1)
            score[i] = abs(a[i] - a[i - 1]);
        else
        {
            score[i] = max(abs(a[i] - a[i + 1]), abs(a[i] - a[i - 1]));
        }
    }

    int *ptr = min_element(score, score + n);
    cout << *ptr << endl;
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