#include <iostream>
using namespace std;

int main()
{
    int tc, a, b, c;
    int num = 0;

    cin >> tc;

    while (num < tc)
    {
        cin >> a >> b >> c;

        if ((a + b) == c)
        {
            cout << "YES" << endl;
        }
        else if ((a + c) == b)
        {
            cout << "YES" << endl;
        }
        else if ((b + c) == a)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        num++;
    }
    return 0;
}
