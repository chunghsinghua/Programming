#include <bits/stdc++.h>

using namespace std;

#define N 110
typedef long long ll;

int d[N][N], row[N], col[N];

int main()
{
    // freopen("P_2_9_5.in", "r", stdin);
    int n;
    while (cin >> n)
    {
        if (!n)
            break;

        memset(d, 0, sizeof(d));
        memset(row, 0, sizeof(row));
        memset(col, 0, sizeof(col));
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
            {
                cin >> d[i][j];
                row[i] += d[i][j];
            }

        for (int j = 1; j <= n; ++j)
            for (int i = 1; i <= n; ++i)
                col[j] += d[i][j];

        int di, dj, rowcnt = 0, colcnt = 0;
        for (int i = 1; i <= n; ++i)
        {
            if (row[i] % 2)
            {
                rowcnt++;
                di = i;
            }

            if (col[i] % 2)
            {
                colcnt++;
                dj = i;
            }
        }

        if (rowcnt == 0 && colcnt == 0)
            cout << "OK\n";
        else if (rowcnt == 1 && colcnt == 1)
            cout << "Change bit (" << di << "," << dj << ")\n";
        else
            cout << "Corrupt\n";
    }
    return 0;
}
