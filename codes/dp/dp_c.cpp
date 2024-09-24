#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

// 定数
const int INF = 1e9;         // 無限大
const long long LINF = 1e18; // 長い無限大
const int MOD = 1e9 + 7;     // モジュロ

// 型定義
using ll = long long;
using PII = pair<int, int>;

int main() {
	ll N;
	cin >> N;
	vector<vector<ll>> dp(N + 1, vector<ll>(3, 0));
	for (int i = 1; i <= N; i ++) {
        for (int j = 0; j < 3; j ++) {
            ll A;
            cin >> A;
            for (int k = 0; k < 3; k ++) {
                if(j == k) continue;
                ll yesterday = dp[i - 1][k];
                dp[i][j] = max(dp[i][j], yesterday + A);
            }
        }
    }

    vector<ll> result = dp[N];
    sort(result.begin(), result.end(), greater<ll>());
    cout << result[0] << endl;
}
