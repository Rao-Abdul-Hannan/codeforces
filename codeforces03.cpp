#include "iostream"
using namespace std;

int main ()
{
    int numOfStatements, i, j, x = 0;

    cin >> numOfStatements;

    string arr[numOfStatements];

    for (i = 0; i < numOfStatements; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < numOfStatements; i++) 
    {
        string temp = arr[i];
        for (j = 0; temp[j] != '\0'; j++)
        {
            if (temp[j] == '+')
            {
                x++;
                break;
            }
            else if (temp[j] == '-')
            {
                x--;
                break;
            }
        }
    }

    cout << x << endl;
    return 0;
}