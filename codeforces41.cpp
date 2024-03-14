#include <iostream>
#include <string>
using namespace std;

int main()
{
    string guest, host, pile;
    int i, j;

    cin >> guest >> host >> pile;

    guest.append(host);

    if (guest.length() != pile.length())
    {
        cout << "NO" << endl;
    }
    else 
    {
        for (i = 0; i < pile.length(); i++)
        {
            for (j = 0; j < pile.length(); j++)
            {
                if (guest[i] == pile[j])
                {
                    pile[j] = 1;
                    break;
                }
            }
            if (j == pile.length())
            {
                break;
            }
        }
        if (i < pile.length())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}