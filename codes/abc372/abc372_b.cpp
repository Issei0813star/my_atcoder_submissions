#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int M;
    cin >> M;

    vector<int> powers_of_3(11);
    for (int i = 0; i <= 10; ++i) {
        powers_of_3[i] = pow(3, i);
    }

    vector<int> A;
    for (int i = 10; i >= 0; --i) {
        while (M >= powers_of_3[i]) {
            A.push_back(i);
            M -= powers_of_3[i];
        }
    }

    cout << A.size() << endl;
    for (int i = 0; i < A.size(); ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
