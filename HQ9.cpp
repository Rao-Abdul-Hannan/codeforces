#include <iostream>
using namespace std;

int main()
{
    int i;
    string p;

    cin >> p;

    for (i = 0; i < p.length(); i++)
    {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            cout << "YES" << endl;
            break;
        }
    }
    if (i == p.length())
    {
        cout << "NO" << endl;
    }
    return 0;
}