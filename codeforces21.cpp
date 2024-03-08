#include <iostream>
#include <string>
using namespace std;

int checkDistinct (int year)
{
    string convertedYear = to_string (year);
    for (int i = 0; convertedYear[i] != 0; i++)
    {
        for (int j = 0; convertedYear[j] != 0; j++)
        {
            if (i != j)
            {
                if (convertedYear[i] == convertedYear[j])
                {
                    return -1;
                }
            }
        }
    }
    return 1;
}
int main()
{
    int year, result = -1;

    cin >> year;

    while (result == -1)
    {
        year++;
        result = checkDistinct (year);
    }
    cout << year;
    return 0;
}