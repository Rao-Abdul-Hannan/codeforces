#include <iostream>
using namespace std;

int main()
{
    int n, r, i = 1;

    cin >> n >> r;

    while ((n * i) % 10 != r && (n * i) % 10 != 0)
    {
        i++;
    }

    cout << i << endl;
    return 0;
}