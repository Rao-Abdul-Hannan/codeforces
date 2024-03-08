#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cin >> n;

    int *array = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }

    cout << sum / (float)n << endl;
    
    delete[] array;
    return 0;
}