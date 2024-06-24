#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, num, x = 0, y = 0, z = 0, sum = 0;

    vector<int> forces;

    cin >> n;

    for (int i = 0; i < n * 3; i++)
    {
        cin >> num;
        forces.push_back(num);
    }

    for (int i = 0; i < (n * 3) - 2; i+=3)
    {
        x += forces[i];
        y += forces[i + 1];
        z += forces[i + 2];
        
    }

    if (x == 0 && y == 0 && z == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}