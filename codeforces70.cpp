#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int *t;

    cin >> n;

    t = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    int countP = 0, countM = 0, countS = 0;
    vector <int> p, m, s;

    for (int i = 0; i < n; i++)
    {
        if (t[i] == 1)
        {
            countP++;
            p.push_back(i + 1);
        }
        else if (t[i] == 2)
        {
            countM++;
            m.push_back(i + 1);
        }
        else
        {
            countS++;
            s.push_back(i + 1);
        }
    }

    int min = countP;

    if (min > countM)
    {
        min = countM;
    }
    if (min > countS)
    {
        min = countS;
    }

    cout << min << endl;

    for (int i = 0; i < min; i++)
    {
        cout << p.at(i) << " " << m.at(i) << " " << s.at(i) << endl;
    }

    delete[] t;
    return 0;
}