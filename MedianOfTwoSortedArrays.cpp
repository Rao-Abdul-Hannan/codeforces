#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int i = 0, j = 0;
    vector<int> answer;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] <= nums2[j])
        {
            answer.push_back(nums1[i]);
                i++;
        }
        else
        {
            answer.push_back(nums2[j]);
                j++;
        }
    }
    if (i == nums1.size())
    {
        for (int k = j; k < nums2.size(); k++)
        {
            answer.push_back(nums2[k]);
        }
    }
    else
    {
        for (int k = i; k < nums1.size(); k++)
        {
            answer.push_back(nums1[k]);
        }
    }
    double median;
    if (answer.size() % 2 == 0)
    {
        median = (answer[answer.size() / 2] + answer[(answer.size() / 2) - 1]) / 2.0;
    }
    else
    {
        median = answer[answer.size() / 2];
    }
    return median;
}

int main()
{
    vector<int> nums1 = {1, 2}, nums2 = {3, 4};
    double median = findMedianSortedArrays(nums1, nums2);
    cout << median << endl;
    return 0;
}