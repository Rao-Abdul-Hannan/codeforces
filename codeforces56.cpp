#include <iostream>

using namespace std;

// Function to calculate (base^exp) % mod using modular exponentiation
int powerMod(int base, long long exp, int mod)
{
    int result = 1;
    base %= mod;
    while (exp > 0)
    {
        // If exp is odd, multiply result with base and take modulo
        if (exp % 2 != 0)
        {
            result = (result * base) % mod;
        }
        // Divide exp by 2 and square base
        exp = exp / 2;
        base = (base * base) % mod;
    }
    return result;
}

int main()
{
    // Reading input
    long long n;
    cin >> n;

    // Finding the last two digits of 5^n
    int last_two_digits = powerMod(5, n, 100);

    // Output the result with leading zeros if needed
    if (last_two_digits < 10)
    {
        cout << "0";
    }
    cout << last_two_digits << endl;

    return 0;
}
