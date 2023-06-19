#include <bits/stdc++.h>

using namespace std;

#define N 210
typedef long long ll;

int sister[N];

struct REFER
{
    int drew, win, lose;
} refer[6];

int main()
{
    // freopen("P_6_17_5.in", "r", stdin);
    refer[0] = {0, 5, 2};
    refer[2] = {2, 0, 5};
    refer[5] = {5, 2, 0};

    int f, n;
    cin >> f >> n;
    for (int i = 1; i <= n; ++i)
        cin >> sister[i];
    sister[0] = -1;
    int i = 1;
    for (; i <= n; ++i)
    {
        cout << f << ' ';
        if (f == refer[sister[i]].win)
        {
            cout << ": Won at round " << i;
            break;
        }
        else if (f == refer[sister[i]].lose)
        {
            cout << ": Lost at round " << i;
            break;
        }
        else
        {
            if (sister[i] == sister[i - 1])
                f = refer[sister[i]].win;
            else
                f = sister[i];
        }
    }
    if (i > n)
        cout << ": Drew at round " << n;
    return 0;
}
