#include <bits/stdc++.h>
using namespace std;

#define N 110
typedef long long ll;

int main()
{
    // freopen("P_7_2_5.in", "r", stdin);
    int n, d, tot = 0;
    cin >> n >> d;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int now = a[0], pre;
    for (int i = 1; i < n; ++i)
    {
        if (now > 0 && a[i] >= now + d)
        {
            tot += a[i] - now;
            now = 0;
            pre = a[i];
        }
        else if (now == 0 && a[i] <= pre - d)
            now = a[i];
    }
    cout << tot;
    return 0;
}
