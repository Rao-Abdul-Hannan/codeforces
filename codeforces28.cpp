#include <iostream>
#include <string>
using namespace std;

int main()
{
    string array1, array2;

    cin >> array1;
    cin >> array2;

    for (int i = 0; array1[i] != '\0'; i++)
    {
        if (array1[i] == array2[i])
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        }
    }
    return 0;
}