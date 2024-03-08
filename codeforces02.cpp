#include "iostream"
using namespace std;

int main ()
{
    int n, k, i, inNext = 0;

    cin >> n >> k;
    int score[n];

    for (i = 0; i < n; i++)
    {
        cin >> score[i];
    }
    
    for (i = 0; i < n; i++)
    {
        if (score[k - 1] <= score[i] && score[i] > 0)    inNext++;
    }

    cout << inNext << endl;
    return 0;
}