#include <iostream>
using namespace std;

int main()
{
    int numEvents = 0, untreated = 0;

    cin >> numEvents;

    int *events = new int[numEvents];

    for (int i = 0; i < numEvents; i++)
    {
        cin >> events[i];
    }

    for (int i = 0; i < numEvents - 1; i++)
    {
        if (events[i] > 0)
        {
            if (events[i + 1] < 0)
            {
                events[i] = events[i] + events[i + 1];
                events[i + 1] = events[i];
            }
            else if (events[i + 1] > 0)
            {
                events[i + 1] = events[i + 1] + events[i];
            }
        }
    }

    for (int i = 0; i < numEvents; i++)
    {
        if (events[i] == -1)
        {
            untreated++;
        }
    }

    cout << untreated << endl;
    return 0;
}