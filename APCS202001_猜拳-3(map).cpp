#include <bits/stdc++.h>
using namespace std;

#define N 1005
typedef long long ll;

struct game
{
    int win, lose, drew;
};

map<int, game> sym = {{0, {2, 5, 0}}, {2, {5, 0, 2}}, {5, {0, 2, 5}}};

int main()
{
    // freopen("Q_6_5_5.in", "r", stdin);
    int f, n;
    cin >> f >> n;
    int sister[n + 1];
    int i;
    for (i = 1; i <= n; ++i)
        cin >> sister[i];
    for (i = 1; i <= n; ++i)
    {
        cout << f << ' ';
        if (f == sym[sister[i]].lose)
        {
            cout << ": Won at round " << i;
            return 0;
        }
        else if (f == sym[sister[i]].win)
        {
            cout << ": Lost at round " << i;
            return 0;
        }
        else
        {
            if (i > 1 && sister[i] == sister[i - 1])
                f = sym[sister[i]].lose;
            else
                f = sister[i];
        }
    }
    cout << ": Drew at round " << n;
    return 0;
}
