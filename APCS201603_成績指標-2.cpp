#include <bits/stdc++.h>

using namespace std;

#define N 60010
typedef long long ll;

int s[N], gate[N], delay[N], lc[N], rc[N];

void dp(int v)
{
    if (s[v] >= 0)
        return;
    dp(lc[v]);
    if (gate[v] == 4)
    {
        s[v] = 1 - s[lc[v]];
        delay[v] = delay[lc[v]] + 1;
        return;
    }
    dp(rc[v]);
    delay[v] = max(delay[lc[v]], delay[rc[v]]) + 1;
    if (gate[v] == 1)
    {
        s[v] = s[lc[v]] & s[rc[v]];
    }
    else if (gate[v] == 2)
    {
        s[v] = s[lc[v]] | s[rc[v]];
    }
    else if (gate[v] == 3)
    {
        s[v] = s[lc[v]] ^ s[rc[v]];
    }
    return;
}

int main()
{
    // freopen("P_8_7_3.in", "r", stdin);
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; ++i)
        cin >> d[i];
    sort(d.begin(), d.end());
    for (int i = 0; i < n - 1; ++i)
        cout << d[i] << ' ';
    cout << d[n - 1] << '\n';
    auto it = lower_bound(d.begin(), d.end(), 60);
    if (it == d.begin())
        cout << "best case";
    else
        cout << *(it - 1);
    cout << '\n';
    if (it == d.end())
        cout << "worst case";
    else
        cout << *it;
    cout << '\n';
    return 0;
}
