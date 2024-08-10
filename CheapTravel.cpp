#include <iostream>
using namespace std;

int main()
{
    int n, m, a, b, rides = 0, fare = 0;

    cin >> n >> m >> a >> b;

    while (rides < n)
    {
        if (b <= (m * a))
        {
            fare += b;
            rides += m;
            if (rides > n && fare - b + a < fare)
            {
                fare -= b;
                fare += a;
                break;
            }
        }
        else
        {
            rides += m;
            fare += a;
        }
    }
    cout << fare << endl;
    return 0;
}