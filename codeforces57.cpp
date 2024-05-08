#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    int numOfCards, sumS = 0, sumD = 0, sereja = 1, dima = 0, count = 0;

    cin >> numOfCards;

    int startPosition = 0, endPosition = numOfCards - 1;

    int *arr = new int[numOfCards];

    for (int i = 0; i < numOfCards; i++)
    {
        cin >> arr[i];
    }

    while (count < numOfCards - 1)
    {
        if (sereja == 1)
        {
            if (arr[startPosition] > arr[endPosition])
            {
                sumS += arr[startPosition];
                startPosition++;
            }
            else
            {
                sumS += arr[endPosition];
                endPosition--;
            }
            sereja = 0;
            dima = 1;
        }
        else
        {
            if (arr[startPosition] > arr[endPosition])
            {
                sumD += arr[startPosition];
                startPosition++;
            }
            else
            {
                sumD += arr[endPosition];
                endPosition--;
            }
            sereja = 1;
            dima = 0;
        }
        count++;
    }
    if (sereja == 1)
    {
        sumS += arr[startPosition];
    }
    else
    {
        sumD += arr[endPosition];
    }

    cout << sumS << " " << sumD << endl;

    delete []arr;
    return 0;
}