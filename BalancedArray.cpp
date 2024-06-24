#include <iostream>
using namespace std;

int main()
{
    int tCases, n, div, i, p;
    int *arre, *arro;

    cin >> tCases;

    while (tCases--)
    {
        cin >> n;

        div = n / 2;

        if (div % 2 == 0)
        {
            arre = new int[div];
            arro = new int[div];

            cout << "Yes" << endl;

            for (i = 0, p = 2; i < div; i++, p += 2)
            {
                arre[i] = p;
            }
            for (i = 0, p = 1; i < div - 1; i++, p += 2)
            {
                arro[i] = p;
            }
            arro[i] = p + div;

            for (i = 0; i < div; i++)
            {
                cout << arre[i] << " ";
            }
            for (i = 0; i < div; i++)
            {
                cout << arro[i] << " ";
            }
            cout << endl;
        }
        else 
        {
            cout << "No" << endl;
        }
    }
    return 0;
}