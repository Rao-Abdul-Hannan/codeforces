#include <iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int min = (k * l) / nl;  //20000

    if (min > (c * d))  // 575
    {
        min = (c * d);
    }
    if (min > (p / np))  // 1
    {
        min = (p / np);
    }

    cout << min / n << endl;
    return 0;
}