#include <iostream>
using namespace std;

int main()
{
    int numOfRounds, m, c, countM = 0, countC = 0;

    cin >> numOfRounds;

    while (numOfRounds--)
    {
        cin >> m >> c;

        if (m > c)
        {
            countM++;
        }
        else if (m < c)
        {
            countC++;
        }            
    }

    if (countM > countC)
    {
        cout << "Mishka" << endl;
    }
    else if (countC > countM)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}