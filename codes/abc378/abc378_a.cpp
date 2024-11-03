#include <iostream>
#include <map>
using namespace std;

int main() {
    int A1, A2, A3, A4;
    cin >> A1 >> A2 >> A3 >> A4;

    map<int, int> color_count;
    color_count[A1]++;
    color_count[A2]++;
    color_count[A3]++;
    color_count[A4]++;

    int pairs = 0;
    for (auto &entry : color_count) {
        pairs += entry.second / 2;
    }

    cout << pairs << endl;
    return 0;
}
