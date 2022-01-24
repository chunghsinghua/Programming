#include <bits/stdc++.h>
using namespace std;

#define N 1010
typedef long long ll;

int d[N], t[N];

int main()
{
    // freopen("Q_7_11_5.in", "r", stdin);
    int n, m, k;
    cin >> n >> m >> k;
    string food[2] = {"eats an Apple pie",
                      "drinks a Corn soup"};
    int foodmoney[2] = {32, 55};
    int times = 0;
    if (n < foodmoney[k])
    {
        cout << "Wayne can't eat and drink.\n";
        return 0;
    }
    while (n >= foodmoney[k % 2])
    {
        cout << m * times << ": ";
        times++;
        n -= foodmoney[k];
        cout << "Wayne " << food[k % 2];
        cout << ", and now he ";
        if (n == 0)
            cout << "doesn't have money.\n";
        else if (n == 1)
            cout << "has 1 dollar.\n";
        else
            cout << "has " << n << " dollars.\n";

        k = (k + 1) % 2;
    }
    return 0;
}
