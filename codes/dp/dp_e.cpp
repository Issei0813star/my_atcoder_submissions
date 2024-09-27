#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 定数
const long long INF = 1e18; // 長い無限大

// 型定義
using ll = long long;

int main() {
    ll N, W;
    cin >> N >> W;

    vector<ll> dp(100001, INF);
    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        ll weight;
        int value;
        cin >> weight >> value;

        if (weight > W) {
            continue; 
        }

        for (int j = 100000; j >= value; j--) {
            if (dp[j - value] != INF) { 
                dp[j] = min(dp[j], dp[j - value] + weight);
            }
        }
    }

    long long res = 0;
    for (int i = 100000; i >= 0; i--) {
        if (dp[i] <= W) {
            res = i;
            break;
        }
    }

    cout << res << endl;
    return 0;
}
