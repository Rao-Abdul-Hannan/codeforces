#include <iostream>
using namespace std;

int main()
{
    int k, l, m, n, d, count = 0;
    cin >> k >> l >> m >> n >> d;

    int *damaged = new int[d];

    for (int i = 0; i < d; i++)
    {
        damaged[i] = 1;
    }

    for (int i = k - 1; i < d; i+=k)
    {
        damaged[i] = -1;
    }

    for (int i = l - 1; i < d; i+=l)
    {
        damaged[i] = -1;
    }

    for (int i = m - 1; i < d; i+=m)
    {
        damaged[i] = -1;
    }

    for (int i = n - 1; i < d; i+=n)
    {
        damaged[i] = -1;
    }

    for (int i = 0; i < d; i++)
    {
        if (damaged[i] == -1)
            count++;
    }

    cout << count << endl;

    delete [] damaged;
    return 0;
}