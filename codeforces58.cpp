#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Input
    long long n, m, a;
    cin >> n >> m >> a;

    // Calculate the number of flagstones needed
    long long num_flagstones = ceil((double)n / a) * ceil((double)m / a);

    // Output the result
    cout << num_flagstones << endl;

    return 0;
}
