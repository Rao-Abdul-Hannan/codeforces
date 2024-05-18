#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tCases;

    cin >> tCases;

    while (tCases--)
    {
        string str;
        cin >> str;

        string substr1 = str.substr(0, str.length() - 3);
        string substr2 = str.substr(3, str.length());

        if ((substr1[0] + substr1[1] + substr1[2]) == substr2[0] + substr2[1] + substr2[2])
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