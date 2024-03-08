#include "iostream"
#include "string"
using namespace std;

int main ()
{
    string s;
    int i, j, length, temp;

    cin >> s;
    length = s.length();

    for (i = 0; i < length - 2; i+=2)
    {
        for (j = 0; j < length - 2; j+=2)
        {
            if (s[j] > s[j + 2])
            {
                temp = s[j];
                s[j] = s[j + 2];
                s[j + 2] = temp;
            }
        }
    }

    cout << s << endl;
    return 0;
}