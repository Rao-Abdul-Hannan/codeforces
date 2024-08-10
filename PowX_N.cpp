#include <iostream>
using namespace std;

double myPow(double x, long long n) {
    if (n == 0) return 1;
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    if (n % 2 == 0) {
        double half = myPow(x, n / 2);
        return half * half;
    } else {
        return x * myPow(x, n - 1);
    }
}

int main()
{

    return 0;
}