#include <iostream>
#include <string>
using namespace std;

bool checkHello(const string& s) {
    string hello = "hello";
    int j = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == hello[j]) {
            j++;
        }
        if (j == hello.length()) {
            return true;
        }
    }

    return false;
}

int main() {
    string s;
    cin >> s;

    if (checkHello(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
