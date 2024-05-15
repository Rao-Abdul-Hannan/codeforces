#include <iostream>
using namespace std;

int main()
{
    int tCases, a, b, c, d, max = 0, count;

    cin >> tCases;

    while (tCases--)
    {
        count = 0;

        cin >> a;
        max = a;

        cin >> b;
        if (b > max)
        {
            count++;
        }

        cin >> c;
        if (c > max)
        {
            count++;
        }

        cin >> d;
        if (d > max)
        {
            count++;
        }

        cout << count << endl;
    }
    return 0;
}