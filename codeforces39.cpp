#include <iostream>
using namespace std;

int main()
{
    int matches, num = 0, instances = 0;

    cin >> matches;

    int *host = new int[matches];
    int *guest = new int[matches];

    while (num < matches)
    {
        cin >> host[num];
        cin >> guest[num];
        num++;
    }

    for (int i = 0; i < matches; i++)
    {
        for (int j = 0; j < matches; j++)
        {
            if (host[i] == guest[j])
            {
                instances++;
            }
        }
    }

    cout << instances << endl;

    delete[] host;
    delete[] guest;
    return 0;
}