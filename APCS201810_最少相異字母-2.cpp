#include <bits/stdc++.h>

using namespace std;

#define N 100010
typedef long long ll;

int main()
{
    // freopen("P_8_8_3.in", "r", stdin);
    int n;
    cin >> n;
    set<string> ret;
    int mx = 27;
    while (n--)
    {
        string t;
        cin >> t;
        set<char> tt(t.begin(),t.end());
        if (tt.size() < mx)
        {
            mx = tt.size();
            ret.clear();
            ret.insert(t);
        }
        else if (tt.size() == mx)
            ret.insert(t);
    }
    cout << *ret.begin();
    return 0;
}
