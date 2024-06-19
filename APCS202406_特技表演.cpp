#include <bits/stdc++.h>
using namespace std;

#define N 50010
typedef long long ll;

int main()
{
    // freopen("P_5_4_3.in", "r", stdin);
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int n;
    cin >> n;
    int li, ha = 0, h, ret = 1;
    for (int i = 0; i < n; ++i)
    {
        cin >> h;
        if (h >= ha)
            li = 1;
        else
        {
            li++;
            ret = max(ret, li);
        }
        ha = h;
    }
    cout << ret;
    return 0;
}
