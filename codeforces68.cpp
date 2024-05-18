#include <iostream>
using namespace std;

int main()
{
    int a, b, c, tCases;

    cin >> tCases;

    while (tCases--)
    {
        cin >> a >> b >> c;

        if (a + b == c)
        {
            cout << '+' << endl;
        }
        else
        {
            cout << '-' << endl;
        }
    }
    return 0;
}