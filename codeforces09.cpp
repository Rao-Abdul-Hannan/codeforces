#include "iostream"
using namespace std;

int main ()
{
    int n, i, remove = 0;

    cin >> n;
    
    char s[n];

    for (i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            remove++;
        }
    }
    cout << remove << endl;
    return 0;
}