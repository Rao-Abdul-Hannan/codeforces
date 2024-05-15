#include <iostream>
#include <string>
using namespace std;

int main()
{
    string takeInput;
    char *middle;
    char *giveOutput;
    int i = 0, j = 0, count = 0;

    cin >> takeInput;

    while (takeInput[i] != '\0')
    {
        if (takeInput[i] == 'A' || takeInput[i] == 'a' || takeInput[i] == 'E' || takeInput[i] == 'e' || takeInput[i] == 'I' || takeInput[i] == 'i' || takeInput[i] == 'O' || takeInput[i] == 'o' || takeInput[i] == 'U' || takeInput[i] == 'u' || takeInput[i] == 'Y' || takeInput[i] == 'y')
        {
            takeInput[i] = '1';
            count++;
        }
        else
        {
            if (takeInput[i] <= 'Z' && takeInput[i] >= 'A')
            {
                takeInput[i] = takeInput[i] + 32;
            }
        }
        i++;
    }

    int length = takeInput.length() - count;
    middle = new char[length + 1];

    i = 0;

    while (takeInput[i] != '\0')
    {
        if (takeInput[i] != '1')
        {
            middle[j++] = takeInput[i]; 
        }
        i++;
    }
    middle[j] = '\0';

    j = 0;

    giveOutput = new char[(length * 2) + 1];

    for (int i = 0; i < length; i++)
    {
        giveOutput[j++] = '.';
        giveOutput[j++] = middle[i];
    }
    giveOutput[j] = '\0';
    
    for (int i = 0; i < length * 2; i++)
    {
        cout << giveOutput[i];
    }

    delete[] middle;
    delete[] giveOutput;

    return 0;
}