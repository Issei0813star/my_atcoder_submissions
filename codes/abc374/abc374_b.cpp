#include <iostream>
#include <string>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    int lenS = S.length();
    int lenT = T.length();
    int minLen = min(lenS, lenT);
    for (int i = 0; i < minLen; ++i) {
        if (S[i] != T[i]) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    if (lenS != lenT) {
        cout << minLen + 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}

