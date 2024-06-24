#include <iostream>
using namespace std;

int main()
{
    int y, w, max = 0, j = 0, i;

    cin >> y >> w;

    if (y > w)
    {
        max = y;
    }
    else if (w > y)
    {
        max = w;
    }
    else 
    {
        max = w;
    }

    max = 7 - max;

    int arr[] = {2, 3, 6};

    for (i = 2; i <= max; i++)
    {
        if (max % i == 0)
        {
            for (j = 0; j < 3; j++)
            {
                if (i == arr[j])
                {
                    if ((max / i) == (6 / i))
                    {
                        cout << 1 << "/" << 1 << endl;
                        break;
                    }
                    else
                    {
                        cout << max / i << "/" << 6 / i << endl;
                        break;
                    }
                }
            }
            if (j < 3)
            {
                break;
            }
        }
    }
    if (i > max)
    {
        cout << max << "/" << 6 << endl;
    }
    return 0;
}