#include <iostream>
using namespace std;

int main()
{
    int numOfResponses, i;

    cin >> numOfResponses;

    int *array = new int[numOfResponses];

    for (int i = 0; i < numOfResponses; i++)
    {
        cin >> *(array + i);
    }

    for (i = 0; i < numOfResponses; i++)
    {
        if (*(array + i) == 1)
        {
            cout << "Hard" << endl;
            break;
        }
    }

    if (i == numOfResponses)
    {
        cout << "Easy" << endl;
    }


    delete[] array;
    return 0;
}