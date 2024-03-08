#include <iostream>
using namespace std;

int main()
{
    int numOfMagnets, group = 0;
    string ends;
    char prevEnd;

    cin >> numOfMagnets;
    cin >> ends;

    prevEnd = ends[1];
    for (int i = 0; i < numOfMagnets - 1; i++)
    {
        cin >> ends;
        if (prevEnd == ends[0])
        {
            group++;
        }
        prevEnd = ends[1];
    }
    cout << group + 1 << endl;

    return 0;
}