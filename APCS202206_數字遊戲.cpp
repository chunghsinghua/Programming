#include <bits/stdc++.h>
using namespace std;

#define N 110
typedef long long ll;

int main()
{
    // freopen("P_7_2_5.in", "r", stdin);
    set<int> s;
    for (int i = 0; i < 3; ++i)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    cout << 4 - s.size() << ' ';
    for (auto it = s.rbegin(); it != s.rend(); ++it)
        cout << *it << ' ';
    return 0;
}
