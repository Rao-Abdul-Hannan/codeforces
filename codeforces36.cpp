#include <iostream>
using namespace std;

int main()
{
    int amount, dollarBills = 0;

    cin >> amount;

    while (amount != 0)
    {
        if (amount >= 100)
        {
            dollarBills = dollarBills + (amount / 100);
            amount = amount % 100;
        }
        else if (amount >= 20)
        {
            dollarBills = dollarBills + (amount / 20);
            amount = amount % 20;
        }
        else if (amount >= 10)
        {
            dollarBills = dollarBills + (amount / 10);
            amount = amount % 10;
        }
        else if (amount >= 5)
        {
            dollarBills = dollarBills + (amount / 5);
            amount = amount % 5;
        }
        else if (amount >= 1)
        {
            dollarBills = dollarBills + amount;
            amount = 0;
        }
    }

    cout << dollarBills << endl;
    return 0;
}