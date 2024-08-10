#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> result;
    int required, i, j;

    for (i = 0; i < nums.size(); i++)
    {
        required = target - nums[i];
        for (j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] == required)
            {
                result.push_back(i);
                result.push_back(j);
                break;
            }
        }
        if (j != nums.size())
        {
            break;
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {2,7,11,15};

    vector<int> answer = twoSum(nums, 9);
    cout << answer[0] << " " << answer[1] << endl;
    return 0;
}