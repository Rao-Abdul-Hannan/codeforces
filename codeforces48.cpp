#include <iostream>
using namespace std;

int main()
{
    int blue, red, days = 0;

    cin >> blue >> red;

    while (blue != 0 && red != 0)
    {
        days++;
        blue--;
        red--;
    }

    cout << days << " ";
    cout << (blue / 2) + (red / 2) << endl;
    return 0;
}