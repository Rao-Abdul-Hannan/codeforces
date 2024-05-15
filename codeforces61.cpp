#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int tCases, size, count1, count2, num1, num2, index1, index2;
    int *array;

    cin >> tCases;

    while (tCases--)
    {
        count1 = count2 = 0;
        index1 = index2 = 0;
        num1 = num2 = 0;
        
        cin >> size;
        array = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }

        num1 = array[0];
        for (int i = 1; i < size; i++)
        {
            if (num1 != array[i])
            {
                num2 = array[i];
                break;
            }
        }

        for (int i = 0; i < size; i++)
        {
            if (num1 == array[i])
            {
                count1++;
                index1 = i;
            }
            else if (num2 == array[i])
            {
                count2++;
                index2 = i;
            }
        }

        if (count1 == 1)
        {
            cout << index1 + 1 << endl;
        }
        else
        {
            cout << index2 + 1 << endl;
        }
        delete[] array;
    }

    return 0;
}