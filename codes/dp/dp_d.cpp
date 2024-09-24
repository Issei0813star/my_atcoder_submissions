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
	ll N, W;
    cin >> N >> W;
    vector<ll> dp(W + 1, 0);
    for (int i = 0; i < N; i ++) {
        ll weight, value;
        cin >> weight >> value;
        for (int j = W ; j >=weight; j --) {
            if(j < weight) continue;
            dp[j] = max(dp[j], dp[j - weight] + value);
        }
    }
    cout << dp[W] << endl;
}
