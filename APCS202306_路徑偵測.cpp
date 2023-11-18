#include <bits/stdc++.h>
using namespace std;

#define N 100010
typedef long long ll;

int main()
{
    // freopen("Q_4_10_3.in", "r", stdin);
    int n, prex, prey, x, y, predir, dir;
    int le = 0, ri = 0, rev = 0;
    cin >> n;
    cin >> prex >> prey;
    predir = 0; // 0:e ; 1:s ; 2:w ; 3:n
    for (int i = 1; i < n; ++i)
    {
        cin >> x >> y;
        if (x > prex)
            dir = 0;
        else if (y < prey)
            dir = 1;
        else if (x < prex)
            dir = 2;
        else
            dir = 3;

        int checkdir = (dir - predir + 4) % 4;
        if (checkdir == 1)
            ri++;
        else if (checkdir == 2)
            rev++;
        else if (checkdir == 3)
            le++;

        predir = dir, prex = x, prey = y;
    }
    cout << le << ' ' << ri << ' ' << rev;
    return 0;
}
