#include <bits/stdc++.h>

using namespace std;

#define N 510
typedef long long ll;

int d[N][N];

int main()
{
    // freopen("P_2_9_5.in", "r", stdin);
    int n, m, t;
    cin >> n >> m >> t;
    int c1, r1, c2, r2;
    int ans = 0;

    for (int i = 0; i < t; ++i)
    {
        cin >> c1 >> r1 >> c2 >> r2;
        if (r1 == r2)
        {
            if (c1 > c2)
                swap(c1, c2);
            for (int j = c1; j <= c2; j++)
                d[r1][j]++;
        }
        else if (c1 == c2)
        {
            if (r1 > r2)
                swap(r1, r2);
            for (int j = r1; j <= r2; ++j)
                d[j][c1]++;
        }
        else if (r1 - r2 == c1 - c2)
        {
            if (r1 > r2)
            {
                swap(r1, r2);
                swap(c1, c2);
            }
            for (int j = r1, k = c1; j <= r2; ++j, ++k)
                d[j][k]++;
        }
        else
        {
            if (r1 > r2)
            {
                swap(r1, r2);
                swap(c1, c2);
            }
            for (int j = r1, k = c1; j <= r2; ++j, --k)
                d[j][k]++;
        }
    }

    for (int j = 1; j <= m; ++j)
        for (int k = 1; k <= n; ++k)
            ans += (d[j][k] > 0);
    cout << ans;
    return 0;
}
