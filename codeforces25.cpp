#include <iostream>
using namespace std;

int main()
{
    int numOfFriends;

    cin >> numOfFriends;

    int *array = new int[numOfFriends];
    int *array1 = new int[numOfFriends];

    for (int i = 0; i < numOfFriends; i++)
    {
        cin >> *(array + i);
    }

    for (int i = 0; i < numOfFriends; i++)
    {
        array1[array[i] - 1] = i + 1;
    }

    for (int i = 0; i < numOfFriends; i++)
    {
        cout << *(array1 + i) << " ";
    }
    cout << endl;

    delete[] array;
    delete[] array1;
    return 0;
}