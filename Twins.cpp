#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, x, max, sum = 0, sumCoins = 0, index, numCoins = 0;

    cin >> n;

    vector<int> coins;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        coins.push_back(x);
    }

    while (sum <= sumCoins)
    {
        max = 0;
        sumCoins = 0;
        for (int i = 0; i < coins.size(); i++)
        {
            if (coins[i] > max)
            {
                max = coins[i];
                index = i;
            }
        }
        coins[index] = 0;
        sum += max;
        for (int i = 0; i < coins.size(); i++)
        {
            sumCoins += coins[i];
        }
        numCoins++;
    }

    cout << numCoins << endl;
    return 0;
}