#include <iostream>
using namespace std;

int main()
{
    int n, k, count = 0;
    int *arr;

    cin >> n >> k;

    arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] + k;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 5)
        {
            arr[i] = -1;
        }
        else
        {
            count++;
        }
    }

    cout << count / 3 << endl;

    delete[] arr;
    return 0;
}