#include <iostream>
using namespace std;

int main()
{
    int tCases, i, j, length;
    string encoded;
    string decoded;

    cin >> tCases;

    while (tCases--)
    {
        cin >> encoded;
        i = 0;
        length = encoded.length();

        for (i = 0; i < length; i+=2)
        {
            cout << encoded[i];
        }
        cout << encoded[length - 1];
        cout << endl;
    }
    return 0;
}