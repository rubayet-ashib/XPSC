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
    int row, col;
    cin >> row >> col;

    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    int ans = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int sum = 0;

            // top-left
            int r = i, c = j;
            while (r >= 0 && c >= 0)
            {
                sum += a[r][c];
                r--;
                c--;
            }

            // top-right
            r = i, c = j;
            while (r >= 0 && c < col)
            {
                sum += a[r][c];
                r--;
                c++;
            }

            // down-left
            r = i, c = j;
            while (r < row && c >= 0)
            {
                sum += a[r][c];
                r++;
                c--;
            }

            // down-right
            r = i, c = j;
            while (r < row && c < col)
            {
                sum += a[r][c];
                r++;
                c++;
            }

            sum -= (3 * a[i][j]);
            ans = max(ans, sum);
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