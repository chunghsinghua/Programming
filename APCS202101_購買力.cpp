#include <bits/stdc++.h>
using namespace std;

#define N 100010
typedef long long ll;

int main()
{
    // freopen("P_4_13_4.in", "r", stdin);
    int n, d, t, tot = 0, money = 0;
    cin >> n >> d;
    for (int i = 0; i < n; ++i)
    {
        int mn = 101, mx = -1, sum = 0;
        for (int j = 0; j < 3; ++j)
        {
            cin >> t;
            sum += t;
            mn = min(mn, t);
            mx = max(mx, t);
        }
        if (mx - mn >= d)
        {
            tot++;
            money += sum / 3;
        }
    }
    cout << tot << ' ' << money;
    return 0;
}
