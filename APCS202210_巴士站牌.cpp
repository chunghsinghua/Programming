#include <bits/stdc++.h>
using namespace std;

#define N 110
typedef long long ll;

int main()
{
    // freopen("P_8_3_5.in", "r", stdin);
    int n;
    cin >> n;
    vector<pair<int, int>> stop(n);
    for (int i = 0; i < n; ++i)
        cin >> stop[i].first >> stop[i].second;
    int mx = 0, mn = 400;
    for (int i = 1; i < n; ++i)
    {
        int t = abs(stop[i].first - stop[i - 1].first) + abs(stop[i].second - stop[i - 1].second);
        mx = max(mx, t);
        mn = min(mn, t);
    }
    cout << mx << ' ' << mn;
    return 0;
}
