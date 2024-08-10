#include <iostream>
#include <queue>
using namespace std;

int ping(int t)
{
    queue<int> q;
    q.push(t);
    int check = t - 3000;
    while (q.front() < check)
    {
        q.pop();
    }
    return q.size();
}

int main()
{
    cout << ping(1) << endl;
    return 0;
}