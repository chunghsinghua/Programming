#include <bits/stdc++.h>

using namespace std;

#define N 100005
typedef long long ll;

int d[N];

int main()
{
    // freopen("P_6_1_4.in", "r", stdin);
    string st1, st2;
    cin >> st1 >> st2;
    if (t2 < t1)
        t2 += (24 * 60 * 60);
    int d = t2 - t1;
    int dh = d / (60 * 60);
    d %= (60 * 60);
    int dm = d / 60;
    d %= 60;
    if (dh < 10)
        cout << 0;
    cout << dh << ":";
    if (dm < 10)
        cout << 0;
    cout << dm << ":";
    if (d < 10)
        cout << 0;
    cout <<d;

    return 0;
}
