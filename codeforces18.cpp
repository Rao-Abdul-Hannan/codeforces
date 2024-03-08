#include "iostream"
using namespace std;

int main ()
{
    int numStops, exitingPassengers, enteringPassengers, minimumCapacity = 0, num = 0, max = 0;

    cin >> numStops;

    while (num < numStops)
    {
        cin >> exitingPassengers >> enteringPassengers;
        minimumCapacity = minimumCapacity - exitingPassengers + enteringPassengers;
        if (minimumCapacity > max)
        {
            max = minimumCapacity;
        }
        num++;
    }

    cout << max << endl;
    return 0;
}