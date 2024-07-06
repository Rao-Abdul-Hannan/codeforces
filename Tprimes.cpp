#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAXN = 1000000;
vector<bool> isPrime(MAXN + 1, true);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= MAXN; ++i) {
        if (isPrime[i]) {
            for (int j = i * 2; j <= MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

bool isTPrime(long long num) {
    if (num < 4) return false;
    long long root = sqrt(num);
    return root * root == num && isPrime[root];
}

int main() {
    sieve();

    int n;
    cin >> n;
    vector<long long> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++) {
        if (isTPrime(numbers[i])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

