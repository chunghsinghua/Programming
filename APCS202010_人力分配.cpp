#include <bits/stdc++.h>
using namespace std;

#define N 100010
typedef long long ll;

int main()
{
    // freopen("P_4_13_4.in", "r", stdin);
    int a1, b1, c1, a2, b2, c2, n;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;
    int y1, y2, mx = -1e9;
    for (int i = 0; i <= n; ++i)
    {
        y1 = a1 * i * i + b1 * i + c1;
        y2 = a2 * (n - i) * (n - i) + b2 * (n - i) + c2;
        mx = max(y1 + y2, mx);
    }
    cout << mx;
    return 0;
}
