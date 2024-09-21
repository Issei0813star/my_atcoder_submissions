#include <iostream>
#include <string>

using ll = long long;
using namespace std;

int countABC(const string& S, int pos) {
    if (pos < 0 || pos + 2 >= (int)S.length()) {
        return 0;
    }
    return (S.substr(pos, 3) == "ABC") ? 1 : 0;
}

int main() {
    ll N, Q;
    string S;
    cin >> N >> Q;
    cin >> S;

    int totalABC = 0;

    for (int i = 0; i + 2 < N; ++i) {
        totalABC += countABC(S, i);
    }

    for (int i = 0; i < Q; ++i) {
        ll X;
        string C;
        cin >> X >> C;
        --X; 

        for (int j = X - 2; j <= X; ++j) {
            totalABC -= countABC(S, j);
        }

        S[X] = C[0];

        for (int j = X - 2; j <= X; ++j) {
            totalABC += countABC(S, j);
        }

        cout << totalABC << endl;
    }

    return 0;
}
