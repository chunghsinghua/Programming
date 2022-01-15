#include <bits/stdc++.h>
using namespace std;

#define N 110
typedef long long ll;

int data[N];

int main()
{
    // freopen("P_3_6_4.in", "r", stdin);
    int n, d;
    cin >> n >> d;
    for (int i = 0; i < n; ++i)
        cin >> data[i];

    int x = data[0], y = -1;
    int ans = 0;
    for (int i = 1; i < n; ++i)
    {
        if (x != -1)
        {
            if (data[i] >= x + d)
            {
                ans += data[i] - x;
                x = -1;
                y = data[i];
            }
        }
        else
        {
            if (data[i] <= y - d)
            {
                x = data[i];
            }
        }
    }
    cout << ans;
    return 0;
}
