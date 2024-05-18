#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, sub, i = 1, factorsCount, flag;

    cin >> n;

    while (count < (n / 2))
    {
        factorsCount = 0;
        sub = n - i;
        flag = 0;

        for (int j = 2; j < sub; j++)
        {
            if (sub % j == 0)
            {
                factorsCount++;
            }
        }
        if (factorsCount == 0)
        {
            count++;
            i++;
            continue;
        }
        factorsCount = 0;
        flag++;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                factorsCount++;
            }
        }
        if (factorsCount == 0)
        {
            count++;
            i++;
            continue;
        }
        if (flag == 1)
        {
            break;
        }

        count++;
        i++;
    }

    cout << sub << " " << i << endl;

    return 0;
}