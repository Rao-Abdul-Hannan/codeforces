#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n == 1) return true;
    if (n % 2 != 0 || n == 0) return false;
    isPowerOfTwo(n / 2);
}

int main()
{
    cout << "Is power of two " << isPowerOfTwo(15) << endl;
    return 0;
}