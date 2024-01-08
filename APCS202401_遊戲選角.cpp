#include <bits/stdc++.h>

using namespace std;

#define N 160000
typedef long long ll;

int main()
{
    // freopen("P_7_10_5.in", "r", stdin);
    int n, max1 = -1, max2 = -1, x1, y1, x2, y2, t;
    int x, y;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x >> y;
        t = x * x + y * y;
        if (t > max1)
        {
            max2 = max1;
            max1 = t;
            x2 = x1, y2 = y1;
            x1 = x, y1 = y;
        }
        else if (t > max2)
        {
            max2 = t;
            x2 = x, y2 = y;
        }
    }
    cout << x2 << ' ' << y2;

    return 0;
}
