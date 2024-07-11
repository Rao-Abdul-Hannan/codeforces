#include <iostream>
using namespace std;

int main()
{
    int n, m;
    bool akshat = false, malvika = true;
    cin >> n >> m;

    while (n != 0 && m != 0)
    {
        n--;
        m--;
        if (!akshat)
        {
            akshat = true;
            malvika = false;
        }
        else
        {
            akshat = false;
            malvika = true;
        }
    }
    if (akshat)
    {
        cout << "Akshat" << endl;
    }
    else 
    {
        cout << "Malvika" << endl;
    }
    return 0;
}