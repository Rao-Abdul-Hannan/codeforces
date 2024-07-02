// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     long long n, k;

//     cin >> n >> k;

//     vector <int> EvenOdd;

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             EvenOdd.push_back(i);
//         }
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             EvenOdd.push_back(i);
//         }
//     }

//     cout << EvenOdd.at(k - 1) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    long long n, k, count;

    cin >> n >> k;

    if (n % 2 == 0)
    {
        count = n / 2;
    }
    else
    {
        count = (n + 1) / 2;
    }

    if (k <= count)
    {
        cout << (2 * k) - 1 << endl;
    }
    else
    {
        cout << 2 * (k - count) << endl;
    }
    return 0;
}