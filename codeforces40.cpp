#include <iostream>
using namespace std;

int main()
{
    int test_cases, num = 0, candies;

    cin >> test_cases;

    while (num < test_cases)
    {
        cin >> candies;
        
        if (candies % 2 == 0)
        {
            cout << (candies / 2) - 1 << endl;
        }
        else 
        {
            cout << (candies / 2) << endl;
        }
        num++;
    }
    return 0;
}