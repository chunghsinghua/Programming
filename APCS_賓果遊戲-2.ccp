#include <bits/stdc++.h>

using namespace std;

#define N 25
typedef long long ll;

int d[N][4][4];

bool check(int p)
{
    bool ret;
    for (int i = 0; i < 4; ++i)
    {
        ret = true;
        for (int j = 0; j < 4; ++j)
            if (d[p][i][j] != 0)
                ret = false;
        if (ret)
            return true;
    }
    for (int i = 0; i < 4; ++i)
    {
        ret = true;
        for (int j = 0; j < 4; ++j)
            if (d[p][j][i] != 0)
                ret = false;
        if (ret)
            return true;
    }

    ret = true;
    for (int i = 0; i < 4; ++i)
        if (d[p][i][i] != 0)
            ret = false;
    if (ret)
        return true;

    ret = true;
    for (int i = 0; i < 4; ++i)
        if (d[p][4 - i - 1][i] != 0)
            ret = false;
    if (ret)
        return true;

    return false;
}

int main()
{
    // freopen("P_2_9_5.in", "r", stdin);
    char a;
    int n;
    cin >> a >> n;
    vector<char> player;
    for (int t = 0; t < n; ++t)
    {
        cin >> a;
        player.push_back(a);
        for (int i = 0; i < 4; ++i)
            for (int j = 0; j < 4; ++j)
                cin >> d[t][i][j];
    }
    vector<char> win;
    vector<int> snum;
    cin >> a;
    for (int s = 0; s < 4 * 4; ++s)
    {
        int num;
        cin >> num;
        snum.push_back(num);
        for (int t = 0; t < n; ++t)
        {
            for (int i = 0; i < 4; ++i)
                for (int j = 0; j < 4; ++j)
                    if (d[t][i][j] == num)
                        d[t][i][j] = 0;
        }

        for (int t = 0; t < n; ++t)
        {
            if (check(t))
                win.push_back(player[t]);
        }
        if (win.size() != 0)
            break;
    }
    for (int i = 0; i < snum.size(); ++i)
        cout << snum[i] << " ";

    for (int i = 0; i < win.size() - 1; ++i)
        cout << win[i] << " ";
    cout << win.back();
    return 0;
}
