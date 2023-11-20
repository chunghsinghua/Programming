#include <bits/stdc++.h>

using namespace std;

#define N 60
typedef long long ll;

int main()
{
    // freopen("P_7_6_3.in", "r", stdin);
    int x, n;
    cin >> x >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    int pos = distance(v.begin(), lower_bound(v.begin(), v.end(), x));
    if (pos > n - pos)
        cout << pos << ' ' << *v.begin();
    else
        cout << (n - pos) << ' ' << *v.rbegin();

    return 0;
}
