#include "iostream"
#include "cctype"
using namespace std;

int main ()
{
    string s;
    int length, i, j, count, distinctWords = 0;

    cin >> s;

    length = s.length();

    for (i = 0; i < length; i++)
    {
        count = 0;
        for (j = i + 1; j < length; j++)
        {
            if (s[i] == s[j])   
            {
                count++;
            } 
        }
        if (count == 0)
        {
            distinctWords++;
        }
    }
    if (distinctWords % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}