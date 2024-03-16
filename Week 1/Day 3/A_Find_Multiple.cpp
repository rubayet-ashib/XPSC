#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    float x = (a * 1.0) / c;
    float y = (b * 1.0) / c;

    int start = ceil(x);
    int end = floor(y);

    if (start * c > b)
        cout << "-1";
    else
        cout << (start * c);

    return 0;
}