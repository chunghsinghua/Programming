#include <bits/stdc++.h>

using namespace std;

#define N 60
typedef long long ll;

int main()
{
    // freopen("P_7_6_3.in", "r", stdin);
    int x, n;
    cin >> x >> n;
    int ltx = 0, gtx = 0, mn = 1e9, mx = -1e9, t;
    for (int i = 0; i < n; ++i)
    {
        cin >> t;
        if (t < x)
        {
            ltx++;
            mn = min(mn, t);
        }
        else
        {
            gtx++;
            mx = max(mx, t);
        }
    }
    if (ltx > gtx)
        cout << ltx << ' ' << mn;
    else
        cout << gtx << ' ' << mx;

    return 0;
}
