#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;

    float x = (t + 0.5) / a;

    cout << floor(x) * b;

    return 0;
}