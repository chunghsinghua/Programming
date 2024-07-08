#include <bits/stdc++.h>
using namespace std;

#define N 50010
typedef long long ll;

int main()
{
    // freopen("q_1_8_5.in", "r", stdin);
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; ++i)
        cin >> vec[i];
    sort(vec.begin(), vec.end());
    for (int i = 0; i < n - 1; ++i)
        cout << vec[i] << ' ';
    cout << vec[n - 1] << '\n';
    int idx = 0;
    while (idx < n && vec[idx] < 60)
        idx++;
    if (idx == 0)
        cout << "best case\n";
    else
        cout << vec[idx - 1] << '\n';
    if (idx >= n)
        cout << "worst case\n";
    else
        cout << vec[idx] << '\n';
    return 0;
}
