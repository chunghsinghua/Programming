#include <bits/stdc++.h>

using namespace std;

#define N 50010
typedef long long ll;

int main()
{
    // freopen("P_4_9_5.in", "r", stdin);
    int n, h1, h2, water, w1, w2, cur, pre = 0, mx = 0, v1, totv, t;
    cin >> n >> w1 >> w2 >> h1 >> h2;
    v1 = w1 * w1 * h1;
    totv = v1 + w2 * w2 * h2;
    for (int i = 0; i < n; ++i)
    {
        cin >> t;
        water += t;
        if (water <= v1)
            cur = water / (w1 * w1);
        else if (water <= totv)
            cur = h1 + (water - v1) / (w2 * w2);
        else
            cur = h1 + h2;
        mx = max(mx, cur - pre);
        pre = cur;
    }
    cout << mx;
    return 0;
}
