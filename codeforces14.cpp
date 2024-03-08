#include "iostream"
using namespace std;

int main ()
{
    int n, k, num = 0;
    cin >> n >> k;

    while (num < k)
    {
        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
        {
            n--;
        }
        num++;
    }

    cout << n << endl;
    return 0;
}