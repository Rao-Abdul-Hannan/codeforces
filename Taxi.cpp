#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int totalGroups, x, groupsCount = 0, left = 0, right = 0;

    cin >> totalGroups;
    vector<int> groupStudents(totalGroups);

    for (int i = 0; i < totalGroups; i++)
    {
        cin >> groupStudents[i];
    }

    sort(groupStudents.begin(), groupStudents.end(), greater<int>());

    if (groupStudents.size() == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    while (!groupStudents.empty() && groupStudents.front() == 4)
    {
        groupsCount++;
        groupStudents.erase(groupStudents.begin());
    }

    right = groupStudents.size() - 1;
    int sum = 0;

    while (left <= right)
    {   
        sum += groupStudents[left];
        while (sum <= 4)
        {
            sum += groupStudents[right];
            if (sum <= 4)
            {
                right--;
            }
        }
        groupsCount++;
        left++;
        sum = 0;
    }
    cout << groupsCount << endl;
    return 0;
}