#include <bits/stdc++.h>
using namespace std;

#define N 110
typedef long long ll;

int main()
{
    int n, a, b, c;
    cin >> n;
    n -= 1;
    if (n < 2500)
    {
        a = 1;
        b = n / 25 + 1;
        c = n % 25 + 1;
    }
    else if (n < 7500)
    {
        a = 2;
        n -= 2500;
        b = n / 50 + 1;
        c = n % 50 + 1;
    }
    else
    {
        a = 3;
        n -= 7500;
        b = n / 25 + 1;
        c = n % 25 + 1;
    }
    cout << a << " " << b << " " << c;
    return 0;
}
