#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> numbers(n), evenNumbers, oddNumbers;

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] % 2 == 0)
        {
            evenNumbers.push_back(i + 1);
        }
        else
        {
            oddNumbers.push_back(i + 1);
        }
    }

    if (evenNumbers.size() == 1)
    {
        cout << evenNumbers[0] << endl;
    }
    else
    {
        cout << oddNumbers[0] << endl;
    }
    return 0;
}