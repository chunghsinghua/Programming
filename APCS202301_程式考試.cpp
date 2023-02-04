#include <bits/stdc++.h>
using namespace std;

#define N 100010
typedef long long ll;

int main()
{
    // freopen("P_8_3_5.in", "r", stdin);
    int n, t, s, time, mx = -10, wrong = 0, total = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> t >> s;
        if (s == -1)
            wrong++;
        if (s > mx)
        {
            mx = s;
            time = t;
        }
    }
    total = mx - n - wrong * 2;
    cout << max(0, total) << ' ' << time;
    return 0;
}
