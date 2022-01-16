#include <bits/stdc++.h>
using namespace std;

#define N 110
typedef long long ll;

int data[N];

int main()
{
    // freopen("P_3_6_4.in", "r", stdin);
    int n, m, k;
    cin >> n >> m >> k;
    const int food[2] = {32, 55};
    int idx = 0;
    if (n < food[k])
    {
        cout << "Wayne can't eat and drink.\n";
        return 0;
    }
    while (n >= food[(k + idx) % 2])
    {
        cout << idx * m << ": Wayne ";

        if ((k + idx) % 2 == 0)
            cout << "eats an Apple pie, ";
        else
            cout << "drinks a Corn soup, ";

        cout << "and now he ";
        n -= food[(k + idx) % 2];
        if (n == 0)
            cout << "doesn't have money.\n";
        else if (n == 1)
            cout << "has " << n << " dollar.\n";
        else
            cout << "has " << n << " dollars.\n";

        idx++;
    }
    return 0;
}
