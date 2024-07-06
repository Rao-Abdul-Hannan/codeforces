#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int n, l;
    int maxGap = 0;

    cin >> n >> l;

    vector<int> lanterns(n);

    for (int i = 0; i < n; i++)
    {
        cin >> lanterns[i];
    }

    sort(lanterns.begin(), lanterns.end());

    for (int i = 0; i < n - 1; i++)
    {
        maxGap = max(maxGap, lanterns[i + 1] - lanterns[i]);
    }

    int startGap = lanterns[0];
    int endGap = l - lanterns[n - 1];
    double minimumRadius = max({maxGap / 2.0, (double)startGap, (double)endGap});
    cout << fixed << setprecision(10) << minimumRadius << endl;
    return 0;
}