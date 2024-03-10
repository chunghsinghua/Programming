#include <bits/stdc++.h>
using namespace std;

#define N 100010
typedef long long ll;

int main()
{
    // freopen("P_4_13_4.in", "r", stdin);
    int n, t;
    cin >> n;
    vector<vector<int>> ss(2, vector<int>(7, 0));
    for (int i = 0; i < n; i++)
    {
        bool check = true;
        for (int j = 0; j < 2; ++j)
            for (int k = 0; k < 7; ++k)
                cin >> ss[j][k];
        if (ss[0][1] == ss[0][3] || ss[1][1] == ss[1][3] || ss[0][1] != ss[0][5] || ss[1][1] != ss[1][5])
        {
            cout << 'A';
            check = false;
        }
        if (ss[0][6] != 1 || ss[1][6] != 0)
        {
            cout << 'B';
            check = false;
        }
        if (ss[0][1] == ss[1][1] || ss[0][3] == ss[1][3] || ss[0][5] == ss[1][5])
        {
            cout << 'C';
            check = false;
        }
        if (check)
            cout << "None";
        cout << '\n';
    }
    return 0;
}
