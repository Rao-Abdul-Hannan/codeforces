#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x, max = 0;

    vector<int> sequence;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sequence.push_back(x);
    }

    for (int i = 0; i < sequence.size(); i++)
    {
        int count = 1;
        for (int j = i + 1; j < sequence.size() && sequence[i] <= sequence[j]; i++, j++)
        {
            count++;
        }
        if (max < count)
        {
            max = count;
        }
    }
    cout << max << endl;
    return 0;
}