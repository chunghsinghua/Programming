#include <bits/stdc++.h>
using namespace std;

#define N 100010
typedef long long ll;

int main()
{
    // freopen("P_4_13_4.in", "r", stdin);
    int a, b, n, an = 0, bn = 0, tot = 0;
    cin >> a >> b >> n;
    for (int i = 0; i < n; ++i)
    {
        an = bn = 0;
        int t = 101;
        while (t)
        {
            cin >> t;
            if (t == a)
                an++;
            else if (a == -t)
                an--;
            else if (t == b)
                bn++;
            else if (t == -b)
                bn--;
        }
        if (an > 0 && bn > 0)
            tot++;
    }
    cout << tot;
    return 0;
}
