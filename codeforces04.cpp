#include "iostream"
using namespace std;

int main ()
{
    int arr[5][5], i, j, index_i, index_j, steps = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                index_i = i;
                index_j = j;
                break;
            }
        }
    }

    while (index_i != 2)
    {
        if (index_i > 2)  
        {
            index_i--;
        }
        else if (index_i < 2)
        {
            index_i++;
        }
        steps++;
    }
    while (index_j != 2)
    {
        if (index_j > 2)
        {
            index_j--;
        }
        else if (index_j < 2)
        {
            index_j++;
        }
        steps++;
    }

    cout << steps << endl;
    return 0;
}