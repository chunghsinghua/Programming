#include <bits/stdc++.h>

using namespace std;

#define N 60010
typedef long long ll;

int main()
{
    // freopen("P_8_7_3.in", "r", stdin);
    int n;
    cin >> n;
    vector<int> d(n);
    int mx = -1, mn = 101;
    for (int i = 0; i < n; ++i)
    {
        cin >> d[i];
        if (d[i] >= 60)
            mn = min(d[i], mn);
        else
            mx = max(mx, d[i]);
    }
    sort(d.begin(), d.end());
    for (int i = 0; i < n - 1; ++i)
        cout << d[i] << ' ';
    cout << d[n - 1] << '\n';
    if (mx < 0)
        cout << "best case";
    else
        cout << mx;
    cout << '\n';
    if (mn > 100)
        cout << "worst case";
    else
        cout << mn;
    cout << '\n';
    return 0;
}
