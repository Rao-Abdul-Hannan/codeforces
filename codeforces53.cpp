#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int tCases;
    cin >> tCases;

    while (tCases--) {
        int size;
        cin >> size;

        int *arr = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }

        sort(arr, arr + size);

        bool possible = true;
        for (int i = 1; i < size; ++i) {
            if (abs(arr[i] - arr[i - 1]) > 1) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        delete[] arr;
    }

    return 0;
}
