#include <bits/stdc++.h>

using namespace std;

#define N 100005
typedef long long ll;

int main()
{
    // freopen("P_2_9_2.in", "r", stdin);
    int n;
    string s;
    vector<char> cipher;
    cin >> n >> s;
    char a[5][5] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char d[5][5] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char b[5][5] = {'E', 'X', 'A', 'M', 'P', 'L', 'B', 'C', 'D', 'F', 'G', 'H', 'I', 'J', 'K', 'N', 'O', 'R', 'S', 'T', 'U', 'V', 'W', 'Y', 'Z'};
    char c[5][5] = {'E', 'X', 'A', 'M', 'P', 'L', 'B', 'C', 'D', 'F', 'G', 'H', 'I', 'J', 'K', 'N', 'O', 'R', 'S', 'T', 'U', 'V', 'W', 'Y', 'Z'};
    int i1 = -1, j1 = -1, i2 = -1, j2 = -1;

    if (islower(s[0]))
    {
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); i += 2)
        {
            int i1, j1, i2, j2;
            for (int m = 0; m < 5; ++m)
            {
                for (int n = 0; n < 5; ++n)
                {
                    if (a[m][n] == s[i])
                    {
                        i1 = m;
                        j1 = n;
                    }
                    if (d[m][n] == s[i + 1])
                    {
                        i2 = m;
                        j2 = n;
                    }
                }
            }
            cipher.push_back(b[i1][j2]);
            cipher.push_back(c[i2][j1]);
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i += 2)
        {
            int i1, j1, i2, j2;
            for (int m = 0; m < 5; ++m)
            {
                for (int n = 0; n < 5; ++n)
                {
                    if (b[m][n] == s[i])
                    {
                        i1 = m;
                        j1 = n;
                    }
                    if (c[m][n] == s[i + 1])
                    {
                        i2 = m;
                        j2 = n;
                    }
                }
            }
            cipher.push_back(a[i1][j2]);
            cipher.push_back(d[i2][j1]);
        }
        reverse(cipher.begin(), cipher.end());
    }
    for (auto e : cipher)
        cout << e;
    return 0;
}
