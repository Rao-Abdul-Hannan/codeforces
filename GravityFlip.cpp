#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x, temp, i, j;

    cin >> n;

    vector<int> cubes;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        cubes.push_back(x);
    }

    for (i = 1; i < n; i++)
    {
        temp = cubes[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (cubes[j] < temp)
            {
                break;
            }
            else
            {
                cubes[j + 1] = cubes[j];
            }
        }
        cubes[j + 1] = temp;
    }

    for (i = 0; i < n; i++)
    {
        cout << cubes[i] << " ";
    }
    cout << endl;
    return 0;
}