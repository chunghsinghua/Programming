#include <bits/stdc++.h>

using namespace std;

#define N 100005
typedef long long ll;

int d[N];

int main()
{
    // freopen("P_6_1_4.in", "r", stdin);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> d[i];
    sort(d, d + n);
    for (int i = 0; i < n - 1; ++i)
        cout << d[i] << " ";
    cout << d[n - 1];
    cout << "\n";

    int idx = lower_bound(d, d + n, 60) - d;
    if (idx == 0)
        cout << "best case";
    else
        cout << d[idx - 1];
    cout << "\n";
    if (idx >= n)
        cout << "worst case";
    else
        cout << d[idx];

    cout << "\n";
    return 0;
}
