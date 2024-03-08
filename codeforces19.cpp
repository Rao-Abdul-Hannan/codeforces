#include <iostream>
using namespace std;

int main()
{
    int height, numberOfStudents, width = 0;
    int *array;

    cin >> numberOfStudents >> height;

    array = new int[numberOfStudents];

    for (int i = 0; i < numberOfStudents; i++)
    {
        cin >> *(array + i);
    }

    for (int i = 0; i < numberOfStudents; i++)
    {
        if (*(array + i) <= height)
        {
            width++;
        }
        else 
        {
            width += 2;
        }
    }

    cout << width;
    return 0;
}
