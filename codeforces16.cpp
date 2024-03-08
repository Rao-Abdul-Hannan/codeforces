#include "iostream"
#include "string"
using namespace std;

int main ()
{
    int gamesPlayed, anton = 0, danik = 0;
    string leaderboard;

    cin >> gamesPlayed;
    cin.ignore ();
    getline(cin, leaderboard);

    for (int i = 0; i < leaderboard.length(); i++)
    {
        if (leaderboard[i] == 'A')
        {
            anton++;
        }
        else if (leaderboard[i] == 'D')
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (danik > anton)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}