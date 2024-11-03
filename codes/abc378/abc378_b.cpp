#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> q(N), r(N);
    for (int i = 0; i < N; i++) {
        cin >> q[i] >> r[i];
    }

    int Q;
    cin >> Q;

    for (int j = 0; j < Q; j++) {
        int t, d;
        cin >> t >> d;
        t--; 

        int remainder = d % q[t];
        int next_collection_day;
        if (remainder <= r[t]) {
            next_collection_day = d + (r[t] - remainder);
        } else {
            next_collection_day = d + (q[t] - remainder + r[t]);
        }

        cout << next_collection_day << endl;
    }

    return 0;
}
