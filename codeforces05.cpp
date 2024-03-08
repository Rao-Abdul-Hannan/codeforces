#include "iostream"
#include "string"
#include "cctype"
using namespace std;

int main ()
{
    string first, second;
    int i, length, breakingPoint1;

    cin >> first;
    cin >> second;

    length = first.length();

    for (i = 0; i < length; i++)
    {
        if (first[i] != (second[i] + 32) && first[i] != (second[i] - 32) && first[i] != second[i])
        {
            breakingPoint1 = i;
            break;
        }
    }

    if (i == length)
    {
        cout << 0 << endl;
    }
    else if (toupper(first[breakingPoint1]) > toupper(second[breakingPoint1]))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}