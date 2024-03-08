#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s3, s4, change = 0;

    cin >> s1;

    cin >> s2;

    if (s2 == s1)
    {
        change++;
    }

    cin >> s3;

    if (s1 == s3 || s2 == s3)
    {
        change++;
    }

    cin >> s4;

    if (s1 == s4 || s2 == s4 || s3 == s4)
    {
        change++;
    }

    cout << change << endl;

    return 0;
}