#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    unordered_map<int, int> last_position;

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
        if (last_position.count(A[i])) {
            B[i] = last_position[A[i]] + 1;
        } else {
            B[i] = -1;
        }
        last_position[A[i]] = i;
    }

    for (int i = 0; i < N; ++i) {
        cout << B[i] << (i == N - 1 ? '\n' : ' ');
    }

    return 0;
}
