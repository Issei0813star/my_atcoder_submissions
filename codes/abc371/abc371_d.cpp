#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 二分探索で範囲のインデックスを取得する関数
int lower_bound_idx(const vector<int>& arr, int val) {
    return lower_bound(arr.begin(), arr.end(), val) - arr.begin();
}

int upper_bound_idx(const vector<int>& arr, int val) {
    return upper_bound(arr.begin(), arr.end(), val) - arr.begin() - 1;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> X(N), P(N);
    for (int i = 0; i < N; i++) cin >> X[i];  // 村の座標
    for (int i = 0; i < N; i++) cin >> P[i];  // 村人の人数

    // 村人の累積和を計算
    vector<long long> cum(N + 1, 0);
    for (int i = 0; i < N; i++) {
        cum[i + 1] = cum[i] + P[i];
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        int L, R;
        cin >> L >> R;
        
        // L 以上の最初の村のインデックス
        int l_idx = lower_bound_idx(X, L);
        // R 以下の最後の村のインデックス
        int r_idx = upper_bound_idx(X, R);

        // 範囲外の場合は人数 0
        if (l_idx > r_idx || r_idx < 0 || l_idx >= N) {
            cout << 0 << endl;
        } else {
            cout << cum[r_idx + 1] - cum[l_idx] << endl;
        }
    }

    return 0;
}
