#include <iostream>
#include <vector>
using namespace std;

string to_base_n(int num, int base) {
    if (num == 0) {
        return "0";
    }

    vector<int> digits;
    while (num > 0) {
        digits.push_back(num % base);
        num /= base;
    }

    string result;
    for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
        result += std::to_string(*it);
    }

    return result;
}


int main() {
    int M;
    cin >> M;
    vector<int> A;
    string M_3 = to_base_n(M ,3);
    //iが重み
    for (size_t i = 0; i < M_3.length(); ++i) {
        int num = M_3[M_3.size() - i - 1] - '0';
        for (int j = 0; j < num ; j ++) {
            A.push_back(i);
        }
    }
    cout << A.size() << endl;
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " \n"[i == A.size() - 1];
    }
    return 0;
}