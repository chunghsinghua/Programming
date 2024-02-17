#include <bits/stdc++.h>

using namespace std;

#define N 60010
typedef long long ll;

int main()
{
    // freopen("P_8_7_3.in", "r", stdin);
    int a, b, c;
    cin >> a >> b >> c;
    a = (a != 0), b = (b != 0);
    bool check = false;
    if ((a & b) == c)
    {
        cout << "AND\n";
        check = true;
    }
    if ((a | b) == c)
    {
        cout << "OR\n";
        check = true;
    }
    if ((a ^ b) == c)
    {
        cout << "XOR\n";
        check = true;
    }
    if (!check)
        cout << "IMPOSSIBLE";
    return 0;
}
