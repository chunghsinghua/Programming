#include <bits/stdc++.h>

using namespace std;

#define N 50010
typedef long long ll;

struct G
{
    int f, back, t, bottom, r, l;
};

int main()
{
    // freopen("p_1_1_5.in", "r", stdin);
    int n, ta, tb;
    cin >> n;
    pair<int, int> a = {0, 0}, b = {0, 0};
    for (int i = 0; i < n; ++i)
    {
        cin >> ta >> tb;
        if (ta * ta + tb * tb > a.first * a.first + a.second * a.second)
        {
            b = a;
            a = {ta, tb};
        }
        else if (ta * ta + tb * tb > b.first * b.first + b.second * b.second)
            b = {ta, tb};
    }
    cout << b.first << ' ' << b.second;
    return 0;
}
