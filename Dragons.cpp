#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int s, n, max = 0, index, i;

    cin >> s >> n;

    vector<int> strength(n), reward(n);
    for (i = 0; i < n; i++)
    {
        cin >> strength[i] >> reward[i];
    }

    while (n)
    {
        max = 0;
        index = 0;
        for (i = 0; i < n; i++)
        {
            if (s > strength[i])
            {
                if (max < s + reward[i])
                {
                    max = s + reward[i];
                    index = i;
                }
            }
        }
        if (max != 0)
        {
            s = max;
            strength.erase(strength.begin() + index);
            reward.erase(reward.begin() + index);
            i--;
        }
        n--;
    }
    if (strength.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}