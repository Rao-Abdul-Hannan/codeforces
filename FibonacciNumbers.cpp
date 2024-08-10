#include <iostream>
#include <vector>
using namespace std;

int fib(int n, std::vector<int>& memo) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (memo[n] != -1) return memo[n]; // Return cached value if already computed

    memo[n] = fib(n - 1, memo) + fib(n - 2, memo); // Compute and cache the value
    return memo[n];
}

int fib(int n) {
    vector<int> memo(n + 1, -1); // Initialize memoization array
    return fib(n, memo);
}

int main()
{
    cout << fib(4) << endl;
    return 0;
}