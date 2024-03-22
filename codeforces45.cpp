#include <iostream>
using namespace std;

int main()
{   
    int n, k, sum = 0, prev = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        sum = sum + (5 * (i + 1));
        if (sum + k > 240)
        {
            break;
        }
        prev = i + 1;
    }

    cout << prev;
    return 0;
}