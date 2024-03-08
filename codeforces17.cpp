#include "iostream"
#include "string"
using namespace std;

int main ()
{
    string s, t;
    char temp;

    getline (cin, s);
    getline (cin, t);

    for (int i = 0; i < (s.length()) / 2; i++)
    {
        temp = s[i];
        s[i] = s[s.length() - i - 1];
        s[s.length() - i - 1] = temp;
    }

    if (s == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}