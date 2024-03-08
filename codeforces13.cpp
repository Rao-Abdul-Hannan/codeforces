#include "iostream"
#include "string"
#include "cctype"
using namespace std;

int main ()
{
    string s;
    int countU = 0, countL = 0;

    getline (cin, s);

    for (int i = 0; s[i] != 0; i++) 
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            countU++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            countL++;
        }
    }

    if (countU > countL)
    {
        for (char &c : s)
            c = toupper(c);
    }
    else 
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
    }

    cout << s;
    return 0;
}