#include <bits/stdc++.h>

using namespace std;

#define N 60010
typedef long long ll;

int main()
{
    // freopen("P_8_7_3.in", "r", stdin);
    vector<int> d(3, 0);
    for (int i = 0; i < 3; ++i)
        cin >> d[i];
    sort(d.begin(), d.end());
    for (int i = 0; i < 2; ++i)
        cout << d[i] << ' ';
    cout << d[2] << '\n';
    int a = d[0] * d[0], b = d[1] * d[1], c = d[2] * d[2];
    if (d[0] + d[1] <= d[2])
    {
        cout << "No";
        return 0;
    }
    if (a + b < c)
        cout << "Obtuse";
    else if (a + b == c)
        cout << "Right";
    else
        cout << "Acute";
    return 0;
}
