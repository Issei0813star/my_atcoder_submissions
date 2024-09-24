#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 定数
const long long LINF = 1e18; // 長い無限大

int main() {
    long long N;
    cin >> N;
    vector<long long> H(N);
    vector<long long> dp(N + 1, LINF);
    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    for (int i = 0; i < N - 1; i++) {
        dp[i + 1] = min(dp[i + 1], dp[i] + abs(H[i] - H[i + 1]));
        if (i < N - 2) {
            dp[i + 2] = min(dp[i + 2], dp[i] + abs(H[i] - H[i + 2])); 
        }
    }

    cout << dp[N - 1] << endl;
}
