#include <iostream>
#include <vector>
using namespace std;

vector<int> frequencySort(vector<int> &nums)
{
    vector<int> frequency(201, 0);
    for (int i = 0; i < nums.size(); i++)
    {
        frequency[100 + nums[i]]++;
    }
    int temp;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = 0; j < nums.size() - 1; j++)
        {
            if (frequency[100 + nums[j]] > frequency[100 + nums[j + 1]])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
            else if (frequency[100 + nums[j]] == frequency[100 + nums[j + 1]])
            {
                if (nums[j] < nums[j + 1])
                {
                    temp = nums[j];
                    nums[j] = nums[j + 1];
                    nums[j + 1] = temp;
                }
            }
        }
    }
    return nums;
}

int main()
{

    vector<int> nums = {-1,1,-6,4,5,-6,1,4,1};
    nums = frequencySort(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}