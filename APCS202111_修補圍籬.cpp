#include <bits/stdc++.h>
using namespace std;

#define N 110
typedef long long ll;

int mat[N][N];

int main()
{
    // freopen("P_7_2_5.in", "r", stdin);
    int n;
    cin >> n;
    int h[n + 2];
    h[0] = h[n + 1] = 200;
    for (int i = 1; i <= n; ++i)
        cin >> h[i];
    int tot = 0;
    for (int i = 1; i <= n; ++i)
        if (h[i] == 0)
            tot += min(h[i - 1], h[i + 1]);
    cout << tot;
    return 0;
}
