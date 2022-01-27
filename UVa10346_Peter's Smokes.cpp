#include <bits/stdc++.h>
using namespace std;

#define N 200010
typedef long long ll;

int d[N];

int main()
{
    // freopen("Q_3_11_5.in", "r", stdin);
    int n, k;
    while (cin >> n >> k)
    {
        int ans = n;
        while (n >= k)
        {
            ans += n / k;
            n = (n % k) + (n / k);
        }
        cout << ans << "\n";
    }
    return 0;
}
