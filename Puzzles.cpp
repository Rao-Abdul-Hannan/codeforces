#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, max, min;

    cin >> n >> m;

    vector<int> puzzles(m);
    vector<int> difference;

    for (int i = 0; i < m; i++)
    {
        cin >> puzzles[i];
    }

    sort(puzzles.begin(), puzzles.end());

    for (int i = 0; i < m - (n - 1); i++)
    {
        max = 0, min = INT32_MAX;
        for (int j = i; j < n + i; j++)
        {
            if (puzzles[j] < min)
            {
                min = puzzles[j];
            }
            if (puzzles[j] > max)
            {
                max = puzzles[j];
            }
        }
        difference.push_back(max - min);
    }

    min = INT32_MAX;

    for (int i = 0; i < difference.size(); i++)
    {
        if (difference[i] < min)
        {
            min = difference[i];
        }
    }

    cout << min << endl;
    return 0;
}