#include <bits/stdc++.h>
using namespace std;

#define N 50010
typedef long long ll;

int main()
{
    // freopen("q_1_8_5.in", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<char> ref(16, 0);
    ref[5] = 'A';
    ref[7] = 'B';
    ref[2] = 'C';
    ref[13] = 'D';
    ref[8] = 'E';
    ref[12] = 'F';
    int n, t, s;
    while (cin >> n)
    {
        for (int j = 0; j < n; ++j)
        {
            s = 0;
            for (int i = 0; i < 4; ++i)
            {
                cin >> t;
                s = s * 2 + t;
            }
            cout << ref[s];
        }
        cout << '\n';
    }
    return 0;
}
