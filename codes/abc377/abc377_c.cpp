#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

// 定数
const int INF = 1e9;         // 無限大
const long long LINF = 1e18; // 長い無限大
const int MOD = 1e9 + 7;     // モジュロ

// 型定義
using ll = long long;
using PII = pair<int, int>;

int main() {
	set<pair<ll, ll>> cant;

    ll N, M;
    cin >> N >> M;

    for (int i = 0; i < M; i++ ) {
        ll a, b;
        cin >> a >> b;
        cant.insert({a, b});

        if (a + 2 <= N && b + 1 <= N) {
            ll aa = a + 2;
            ll bb = b + 1;
            cant.insert({aa, bb});
        }

        if (a + 1 <= N && b + 2 <= N) {
            ll aa = a + 1;
            ll bb = b + 2;
            cant.insert({aa, bb});
        }

        if (a - 1 > 0 && b + 2 <= N) {
            ll aa = a - 1;
            ll bb = b + 2;
            cant.insert({aa, bb});
        }

        if (a - 2 > 0 && b + 1 <= N) {
            ll aa = a - 2;
            ll bb = b + 1;
            cant.insert({aa, bb});
        }

        if (a - 2 > 0 && b - 1 > 0) {
            ll aa = a - 2;
            ll bb = b - 1;
            cant.insert({aa, bb});
        }

        if (a - 1 > 0 && b - 2 > 0) {
            ll aa = a - 1;
            ll bb = b - 2;
            cant.insert({aa, bb});
        }

        if (a + 1 <= N && b - 2 > 0) {
            ll aa = a + 1;
            ll bb = b - 2;
            cant.insert({aa, bb});
        }

        if (a + 2 <= N && b - 1 > 0) {
            ll aa = a + 2;
            ll bb = b - 1;
            cant.insert({aa, bb});
        }
    }

    ll count = N * N - cant.size();

    cout << count << endl;

    return 0;
}
