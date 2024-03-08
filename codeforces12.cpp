#include "iostream"
using namespace std;

int main ()
{
    int cost, dollars, bananas, borrowed, totalCost = 0;

    cin >> cost >> dollars >> bananas;

    for (int i = 1; i <= bananas; i++)
    {
        totalCost = totalCost + (i * cost);
    }

    borrowed = dollars - totalCost;

    if (borrowed >= 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << -borrowed << endl;
    }
    return 0;
}