#include <iostream>
#include "cstdlib"
#include "string"
using namespace std;

int main()
{
    int n, max, min, max_i = 0, min_i = 0, i, steps;
    int *array;

    cin >> n;
    array = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    max = array[0];
    min = array[0];

    for (i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            max_i = i;
        }
        if (array[i] <= min)
        {
            min = array[i];
            min_i = i;
        }
    }

    min_i = n - 1 - min_i;
    steps = max_i + min_i;

    if (steps >= n)
    {
        steps--;
    }

    cout << steps << endl;

    return 0;
}