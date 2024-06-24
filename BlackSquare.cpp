#include <iostream>
using namespace std;

int main()
{
    int arr[4], caloriesBurnt = 0;
    string s;

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        int num = s[i] - '0';
        caloriesBurnt += arr[num - 1];
    }

    cout << caloriesBurnt << endl;

    return 0;
}