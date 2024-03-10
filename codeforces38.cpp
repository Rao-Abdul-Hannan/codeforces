#include <iostream>
using namespace std;

int main()
{
    int n, faces = 0;
    string polyhedron;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> polyhedron;
        
        if (polyhedron[0] == 'T')
        {
            faces += 4;
        }
        else if (polyhedron[0] == 'C')
        {
            faces += 6;
        }
        else if (polyhedron[0] == 'O')
        {
            faces += 8;
        }
        else if (polyhedron[0] == 'D')
        {
            faces += 12;
        }
        else if (polyhedron[0] == 'I')
        {
            faces += 20;
        }
    }

    cout << faces << endl;
    return 0;
}