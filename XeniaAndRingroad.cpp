#include <iostream>
#include <vector>
using namespace std;

void takeInput(vector<long long> &work, long long m)
{
    for (long long i = 0; i < m; i++)
    {
        cin >> work[i];
    }
}

long long calculateTime(const vector<long long> &work, long long n)
{
    long long time = 0;
    long long currentPosition = 1;
    for (long long i = 0; i < work.size(); i++)
    {
        if (work[i] >= currentPosition)
        {
            time += work[i] - currentPosition;
        }
        else
        {
            time += n - (currentPosition - work[i]);
        }
        currentPosition = work[i];
    }
    return time;
}

int main()
{
    long long n, m;
    cin >> n >> m;

    vector<long long> work(m);

    takeInput(work, m);

    long long time = calculateTime(work, n);

    cout << time << endl;
    return 0;
}