#include <bits/stdc++.h>

using namespace std;

#define N 50010
typedef long long ll;

int main()
{
    // freopen("P_5_4_1.in", "r", stdin);
    int n, a, b;
    cin >> a >> b >> n;
    int period = a + b;
    int tot = 0, t;
    while (n--)
    {
        cin >> t;
        t %= period;
        if (t >= a)
            tot += a + b - t;
    }
    cout << tot;
    return 0;
}
