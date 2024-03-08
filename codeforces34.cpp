#include <iostream>
using namespace std;

int main()
{
    int length, j;
    char i = 'A';

    cin >> length;

    string name;

    cin >> name;
    for (j = 0; name[j] != '\0'; j++)
    {
        name[j] = toupper(name[j]);
    }

    if (length < 25)
    {
        cout << "NO" << endl;
    }
    else
    {
        while (i <= 'Z')
        {
            for (j = 0; name[j] != '\0'; j++)
            {
                if (i == name[j])
                {
                    break;
                }
            }
            if (j == length)
            {
                break;
            }
            i++;
        }
        if (i <= 'Z')
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