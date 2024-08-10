#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std;

long long minimumCost(string source, string target, vector<char> &original, vector<char> &changed, vector<int> &cost)
{
    vector<vector<pair<char, int>>> adjList(25);
    int i, j;
    for (i = 0; i < original.size(); i++)
    {
        adjList[original[i] - 'a'].push_back({changed[i], cost[i]});
    }

    queue<pair<char, int>> q;
    vector<bool> visited(25, false);
    pair<char, int> each;
    long long min, sum = 0, deroute = 0;
    char check;
    for (i = 0; i < source.size(); i++)
    {
        if (source[i] != target[i])
        {
            for (j = 0; j < original.size(); j++)
            {
                if (source[i] == original[j] && target[i] == changed[j])
                {
                    q.push({original[j], cost[j]});
                    break;
                }
            }
            if (q.empty())
                return -1;
            while (!q.empty())
            {
                each = q.front();
                min = each.second;
                check = each.first;
                deroute = 0;
                visited[target[i] - 'a'] = true;
                q.pop();
                if (!adjList[check - 'a'].size() && !visited[target[i] - 'a'])
                    return -1;
                else
                {
                    deroute = 0;
                }
                for (j = 0; j < adjList[check - 'a'].size(); j++)
                {
                    if (adjList[check - 'a'][j].first == target[i])
                    {
                        if (min > adjList[check - 'a'][j].second)
                            min = adjList[check - 'a'][j].second;
                        visited[target[i] - 'a'] = true;
                    }
                    else
                    {
                        q.push({adjList[check - 'a'][j]});
                        deroute += adjList[check - 'a'][j].second;
                    }
                }
            }
        }
        sum = sum + min + deroute;
    }
    return sum;
}

int main()
{
    string source = "abcd", target = "acbe";
    vector<char> original = {'a', 'b', 'c', 'c', 'e', 'd'};
    vector<char> changed = {'b', 'c', 'b', 'e', 'b', 'e'};
    vector<int> cost = {2, 5, 5, 1, 2, 20};

    long long Cost = minimumCost(source, target, original, changed, cost);

    cout << Cost << endl;

    return 0;
}