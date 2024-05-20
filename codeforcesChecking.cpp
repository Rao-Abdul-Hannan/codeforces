#include <iostream>
using namespace std;

int main()
{
    int tCases, flag;
    char c;
    string test = "codeforces";

    cin >> tCases;

    while (tCases--)
    {
        cin >> c;
        flag = 0;

        for (int i = 0; test[i] != '\0'; i++)
        {
            if (c == test[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}