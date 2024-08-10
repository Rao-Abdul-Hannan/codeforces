#include <iostream>
using namespace std;

bool isPowerOfThree(int n) {
    if (n <= 0) return false;  // Handles all negative numbers and zero
    if (n == 1) return true;    // Base case
    if (n % 3 == 0) {
        return isPowerOfThree(n / 3);  // Recursive call
    }
    return false;  // If not divisible by 3
}

int main()
{

    return 0;
}