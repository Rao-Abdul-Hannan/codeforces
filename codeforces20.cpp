#include <iostream>
using namespace std;

int main()
{
    int students, time;
    string queue;
    char temp;

    cin >> students >> time;
    cin >> queue;

    for (int i = 0; i < time; i++)
    {
        for (int j = 0; j < students - 1; j++)
        {
            if (queue[j] == 'B' && queue[j + 1] == 'G')
            {
                temp = queue[j + 1];
                queue[j + 1] = queue[j];
                queue[j] = temp;
                j++;
            }
        }
    }

    cout << queue << endl;
    return 0;
}