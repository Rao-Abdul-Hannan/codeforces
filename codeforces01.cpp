#include <iostream>
using namespace std;

int main ()
{
    int numberOfProblems, num = 0, array[3], i, sureProblems, solvedProblems = 0;

    cin >> numberOfProblems;

    while (num < numberOfProblems) 
    {
        sureProblems = 0;

        for (i = 0; i < 3; i++) //taking input about who can solve the problem
        {
            cin >> array[i];
        }

        for (i = 0; i < 3; i++)
        {
            if (array[i] == 1)
            {
                sureProblems++;    //checking who can solve the problem
            }
        }

        if (sureProblems >= 2) //checking if the problem is solved
        {
            solvedProblems++; 
        }

        num++;
    }

    cout << solvedProblems << endl;

    return 0;
}