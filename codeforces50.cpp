#include <iostream>
using namespace std;

int main()
{
    int arr[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int index = 0;

    for (int i = 1; i < 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            index = i;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        if (i == index)     continue;
        else
        {
            cout << max - arr[i] << " ";
        }
    }
    return 0;
}