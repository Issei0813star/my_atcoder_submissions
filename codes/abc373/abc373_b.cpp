#include <iostream>
#include <string>
#include <vector>
#include <cmath> // for abs

using namespace std;

int main() {
    string S;
    cin >> S;

    vector<int> position(26);

    for (int i = 0; i < 26; ++i) {
        position[S[i] - 'A'] = i;
    }

    int current_pos = position[0]; 
    int total_distance = 0;

    for (char c = 'B'; c <= 'Z'; ++c) {
        int next_pos = position[c - 'A'];
        total_distance += abs(next_pos - current_pos);
        current_pos = next_pos; 
    }

    cout << total_distance << endl;

    return 0;
}
