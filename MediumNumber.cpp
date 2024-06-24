#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int tCases, a, b, c, temp;

    cin >> tCases;

    while (tCases--)
    {
        cin >> a >> b >> c;

        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
            if (b > c)
            {
                temp = c;
                c = b;
                b = temp;
            }
            if (a > b)
            {
                temp = b;
                b = a;
                a = temp;
            }
        }
        else if (a > c)
        {
            temp = c;
            c = a;
            a = temp;
        }
        if (b > c)
        {
            temp = c;
            c = b;
            b = temp;
            if (a > b)
            {
                temp = a;
                a = b;
                b = temp;
            }
        }
        cout << b << endl;
    }

    return 0;
}