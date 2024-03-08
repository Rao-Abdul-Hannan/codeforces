#include <iostream>
using namespace std;

int main()
{
    int numOfRooms, living, capacity, num = 0, rooms = 0;

    cin >> numOfRooms;

    while (num < numOfRooms)
    {
        cin >> living >> capacity;

        if (capacity - living >= 2)
        {
            rooms++;
        }
        num++;
    }

    cout << rooms << endl;
    return 0;
}