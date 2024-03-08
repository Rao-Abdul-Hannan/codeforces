#include <iostream>
using namespace std;

int main()
{
    int levels, levelsX, levelsY, i, j;

    cin >> levels;

    cin >> levelsX;
    int *Xray = new int[levelsX];

    for (int i = 0; i < levelsX; i++)
    {
        cin >> Xray[i];
    }

    cin >> levelsY;
    int *Yray = new int[levelsY];

    for (int i = 0; i < levelsY; i++)
    {
        cin >> Yray[i];
    }



    for (i = 0; i < levels; i++)
    {
        for (j = 0; j < levelsX; j++)
        {
            if (Xray[j] == i + 1)
            {
                break;
            }
        }
        if (j == levelsX)
        {
            for (j = 0; j < levelsY; j++)
            {
                if (Yray[j] == i + 1)
                {
                    break;
                }
            }
            if (j == levelsY)
            {
                cout << "Oh, my keyboard!" << endl;
                break;
            }
        }
    }
    if (i == levels)
    {
        cout << "I become the guy." << endl;
    }
    return 0;
}