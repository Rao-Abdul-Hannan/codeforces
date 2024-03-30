#include <iostream>
using namespace std;

int main()
{
    int n, max, min, amazingPerformances = 0;

    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            amazingPerformances++;
        }
        else if (arr[i] < min)
        {
            min = arr[i];
            amazingPerformances++;
        }
    }

    cout << amazingPerformances << endl;

    delete[] arr;
    return 0;
}