#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int testCases = 0;
    string s;

    cin >> testCases;
    cin.ignore();

    while (testCases--)
    {
        getline (cin, s);

        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }

        if (s == "YES")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}