#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int count = 0;

    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count++;
        }
    }
    if (count == str.size())
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = str[i] ^ 32;
        }
        cout << str << endl;
        return 0;
    }

    count = 1;

    for (int i = 1; i < str.size(); i++)
    {
        if ((str[0] >= 'a' && str[0] <= 'z') && (str[i] >= 'A' && str[i] <= 'Z'))
        {
            count++;
        }
    }

    if (count == str.size())
    {
        for (int i = 0; i < str.size(); i++)
        {
            str[i] = str[i] ^ 32;
        }
        cout << str << endl;
        return 0;
    }

    cout << str << endl;

    return 0;
}