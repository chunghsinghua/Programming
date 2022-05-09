#include <bits/stdc++.h>

using namespace std;

#define N 100005
typedef long long ll;

int main()
{
    // freopen("P_6_1_4.in", "r", stdin);
    string st1, st2;
    cin >> st1 >> st2;
    int t1h = stoi(st1.substr(0, 2));
    int t1m = stoi(st1.substr(3, 2));
    int t1s = stoi(st1.substr(6, 2));
    int t2h = stoi(st2.substr(0, 2));
    int t2m = stoi(st2.substr(3, 2));
    int t2s = stoi(st2.substr(6, 2));
    int ds = t2s - t1s;
    int dm = t2m - t1m;
    int dh = t2h - t1h;
    if (ds < 0)
    {
        ds += 60;
        dm -= 1;
    }
    if (dm < 0)
    {
        dm += 60;
        dh -= 1;
    }
    if (dh < 0)
    {
        dh += 24;
    }
    if (dh < 10)
        cout << 0;
    cout << dh << ":";
    if (dm < 10)
        cout << 0;
    cout << dm << ":";
    if (ds < 10)
        cout << 0;
    cout << ds;

    return 0;
}
