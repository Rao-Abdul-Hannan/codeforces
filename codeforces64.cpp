#include <iostream>
using namespace std;

int main()
{
    int n, max = 0, index, totalRequired = 0;
    int *arr;

    cin >> n;

    arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i != index)
        {
            totalRequired += max - arr[i];
        }
        else
        {
            continue;
        }
    }

    cout << totalRequired << endl;
    return 0;
}