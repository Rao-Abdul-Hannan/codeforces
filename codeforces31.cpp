#include <iostream>
using namespace std;

int main()
{
    int tCases, num = 0, a, b, steps;

    cin >> tCases;

    while (num < tCases)
    {
        cin >> a >> b;
        if (a % b != 0)
        {
            steps = b - (a % b);
        }
        else 
        {
            steps = 0;
        }
        cout << steps << endl;
        num++;
    }
    return 0;
}