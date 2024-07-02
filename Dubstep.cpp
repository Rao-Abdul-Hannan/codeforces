#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            cout << " ";
            i += 2;
        }
        else
        {
            cout << str[i];
        }
    }
    return 0;
}