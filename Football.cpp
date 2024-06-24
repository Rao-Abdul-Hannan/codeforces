#include <iostream>
#include <string>  
using namespace std;

int main()
{
    string players;
    int i;
    cin >> players;

    for (i = 0; i < players.length(); i++)
    {
        if (players[i] == players[i + 1] && players[i + 1] == players[i + 2] && players[i + 2] == players[i + 3] && players[i + 3] == players[i + 4] && players[i + 4] == players[i + 5] && players[i + 5] == players[i + 6])
        {
            cout << "YES" << endl;
            break;
        }
    }
    if (i == players.length())
    {
        cout << "NO" << endl;
    }
    return 0;
}