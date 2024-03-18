#include <iostream>
using namespace std;

int main()
{
    int testCases = 0, num = 0, numToCheck = 0, n, place, addends, rem = 0;

    cin >> testCases;

    while (num < testCases)
    {
        cin >> numToCheck;
        n = numToCheck;
        place = 1;
        addends = 0;

        while (n != 0)
        {
            rem = n % 10;
            n = n / 10;
            if ((rem * place) != 0)
            {
                addends++;
            }
            place *= 10;
        }

        cout << addends << endl;

        n = numToCheck;
        place = 1;

        while (n != 0)
        {
            rem = n % 10;
            n = n / 10;
            if ((rem * place) != 0)
            {
                cout << rem * place << " ";
            }
            place *= 10;
        }
        cout << endl;
        num++;
    }
    return 0;
}