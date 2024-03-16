#include <iostream>
using namespace std;

int main()
{
    int n, m, flag = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                cout << "#";
            }
            else
            {
                if (flag == 0 && j == m - 1)
                {
                    cout << "#";
                }
                else if (flag == 0)
                {
                    cout << ".";
                }
                else if (flag == 1 && j == 0)
                {
                    cout << "#";
                }
                else if (flag == 1)
                {
                    cout << ".";
                }
            }
        }
        cout << endl;
        if (i % 2 != 0)
        {
            flag = !flag;
        }
    }
    return 0;
}