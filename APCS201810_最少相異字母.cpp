#include <bits/stdc++.h>

using namespace std;

#define N 200010
typedef long long ll;

int main()
{
    // freopen("P_3_6_1.in", "r", stdin);
    int n;
    cin >> n;
    string s;
    int mn = 26;
    vector<string> vec;
    while (n--)
    {
        cin >> s;
        set<char> ss(s.begin(), s.end());
        int len = ss.size();
        if (len < mn)
        {
            vec.clear();
            vec.push_back(s);
            mn = len;
        }
        else if (len == mn)
            vec.push_back(s);
    }
    sort(vec.begin(), vec.end());
    cout << *vec.begin();

    return 0;
}
