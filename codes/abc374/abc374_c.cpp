#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> K(N);

    int total_sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> K[i];
        total_sum += K[i];
    }

    int min_max_group_size = numeric_limits<int>::max();

    for (int mask = 0; mask < (1 << N); mask++) {
        int sumA = 0, sumB = 0;

        for (int i = 0; i < N; i++) {
            if (mask & (1 << i)) {
                sumA += K[i]; 
            } else {
                sumB += K[i];
            }
        }

        int max_group_size = max(sumA, sumB);
        
        min_max_group_size = min(min_max_group_size, max_group_size);
    }

    cout << min_max_group_size << endl;

    return 0;
}
