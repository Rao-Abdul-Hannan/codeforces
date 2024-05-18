#include <iostream>
#include <string>
using namespace std;

int main()
{
    string code;

    cin >> code;

    int i = 0;
    while (i < code.length())
    {
        if (code[i] == '.')
        {
            cout << 0;
            i++;
        }
        else if (code[i] == '-')
        {
            if (code[i + 1] == '.')
            {
                cout << 1;
                i += 2;
            }
            else if (code[i + 1] == '-')
            {
                cout << 2;
                i += 2;
            }
        }
    }
    return 0;
}