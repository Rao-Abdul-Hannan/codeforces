#include <iostream>
using namespace std;

int main()
{
    int tCases, k, num;

    cin >> tCases;

    while (tCases--)
    {
        cin >> k;
        int i = 1;
        num = 0;

        while (i <= k)
        {
            if (num % 3 == 0 || num % 10 == 3)
            {
                num++;
                continue;
            }
            num++;
            i++;
        }
        cout << num - 1<< endl;
    }
    return 0;
}