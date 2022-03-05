#include <bits/stdc++.h>
using namespace std;

#define N 50010
typedef long long ll;

int d[N];

int main()
{
    // freopen("P_4_9_4.in", "r", stdin);
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    int idx = 0;
    while (s[idx] == '0')
        idx++;
    if (idx >= s.size())
    {
        cout << "0";
        return 0;
    }
    for (int i = idx; i < s.size(); ++i)
        cout << s[i];
    return 0;
}
