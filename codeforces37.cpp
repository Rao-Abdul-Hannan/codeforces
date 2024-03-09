#include <iostream>
#include <string>
using namespace std;

int main()
{
    string dataSet;
    int count = 0;
    char check;

    getline (cin, dataSet);

    for (int i = 0; i < dataSet.length(); i++)
    {
        if (isalpha(dataSet[i]))
        {
            check = dataSet[i];
            for (int j = i + 1; j < dataSet.length(); j++)
            {
                if (dataSet[i] == dataSet[j])
                {
                    dataSet[j] = 1;
                }
            }
            count++;
        }
    }

    cout << count << endl;
    return 0;
}