#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int tCases, a, b, quo = 0, num = 0, rem = 0;

    cin >> tCases;

    while (tCases--)
    {
        cin >> a >> b;

        num = abs (a - b);

        quo = num / 10;

        rem = num % 10;

        if (rem != 0)
        {
            quo++;
        }

        cout << quo << endl;
    }
    return 0;
}