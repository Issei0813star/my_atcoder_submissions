#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

// 定数
const int INF = 1e9;         // 無限大
const long long LINF = 1e18; // 長い無限大
const int MOD = 1e9 + 7;     // モジュロ

// 型定義
using ll = long long;
using PII = pair<int, int>;

int main() {
	ll N, K;
    cin >> N >> K;
    vector<ll> dp(N, LINF);
    vector<ll> H(N);

    for (int i = 0; i < N; i ++) cin >> H[i];

    dp[0] = 0;
    for (int i = 0; i < N; i ++) {
        ll curr = H[i];
        for (int j = 1; j <= K && i + j < N; j ++) {
            ll target = H[i + j];
            dp[i + j] = min(dp[i + j], dp[i] + abs(target - curr));
        }
    }

    cout << dp[N - 1] << endl;
}
