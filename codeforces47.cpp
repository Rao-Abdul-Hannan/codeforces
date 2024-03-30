#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x[3], min, sum = 0, distance = 0, mid;
    float avg;

    for (int i = 0; i < 3; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < 3; i++)
    {
        sum += x[i];
    }

    avg = sum / 3.0;

    min = abs (x[0] - avg);
    mid = x[0];

    for (int i = 1; i < 3; i++)
    {
        if (min > abs (x[i] - avg))
        {
            min = abs (x[i] - avg);
            mid = x[i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        distance = distance + abs(mid - x[i]);
    }

    cout << distance << endl;
    return 0;
}