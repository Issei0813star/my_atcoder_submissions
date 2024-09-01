#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long count = N; // 各要素単独の区間（長さ1）は全て等差数列

    int length = 1;
    for (int i = 1; i < N; i++) {
        if (i > 1 && A[i] - A[i - 1] == A[i - 1] - A[i - 2]) {
            length++;
        } else {
            length = 2; // 最低でも2要素の等差数列
        }
        count += length - 1;
    }

    cout << count << endl;

    return 0;
}
