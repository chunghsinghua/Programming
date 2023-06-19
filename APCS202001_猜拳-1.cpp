#include <bits/stdc++.h>
using namespace std;

#define N 100010
typedef long long ll;

int y[N];
struct st
{
    int drew, lose, win;
} a[6];
// 0:stone 2:Scissors 5:

int main()
{
    // freopen("P_3_6_2.in", "r", stdin);
    int f, n;
    cin >> f >> n;
    for (int i = 1; i <= n; ++i)
        cin >> y[i];
    a[0] = {0, 2, 5};
    a[2] = {2, 5, 0};
    a[5] = {5, 0, 2};
    for (int i = 1; i <= n; ++i)
    {
        if (f == a[y[i]].drew)
        {
            cout << f << ' ';
            if (i > 1 && y[i] == y[i - 1])
                f = a[y[i]].win;
            else
                f = y[i];
        }
        else
        {
            if (f == a[y[i]].win)
                cout << f << " : Won at round " << i;
            else
                cout << f << " : Lost at round " << i;
            return 0;
        }
    }
    cout << ": Drew at round " << n;
    return 0;
}
