#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    stack<int> s;
    while (n != 0)
    {
        s.push(n % 10);
        n /= 10;
    }

    while (s.size() < 4)
        s.push(0);

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}