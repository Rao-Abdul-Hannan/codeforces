#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            cout << " that ";
        }
        if ((i + 1) % 2 == 0)
        {
            cout << "I love";
        }
        else
        {
            cout << "I hate";
        }
    }
    cout << " it";
    return 0;
}