#include <iostream>
#include <vector>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    vector<char> substring;
    vector<int> index;
    int max = 0, i, j, size;
    substring.push_back(s[0]);
    index.push_back(0);

    for (i = 1; i < s.length(); i++)
    {
        for (j = 0; j < substring.size(); j++)
        {
            if (s[i] == substring[j])
            {
                if (max < substring.size())
                    max = substring.size();
                substring.erase(substring.begin(), substring.end());
                i = index[j + 1];
                index.erase(index.begin(), index.end());
                break;
            }
        }
        substring.push_back(s[i]);
        index.push_back(i);
    }

    if (max < substring.size())
    {
        max = substring.size();
    }

    return max;
}

int main()
{
    string s = "abcabcbb";
    int num = lengthOfLongestSubstring(s);
    cout << num << endl;
    return 0;
}