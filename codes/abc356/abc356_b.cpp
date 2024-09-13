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
	ll n, m;
	cin >> n >> m;
	vector<ll> a(m);

	for (int i = 0; i < m; i++) cin >> a[i];

	vector<vector<ll>> b(n, vector<ll>(m));
	for(int i = 0; i < n; i ++) {
		for (int j = 0; j < m; j ++) {
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; i ++) {
		vector<ll> bb = b[i];
		for(int j = 0; j < m; j ++) {
			ll bbb = bb[j];
			ll aa = a[j];
			a[j] = aa - bbb;
		}
	}

	for(ll n : a) {
		if(n > 0) {
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
	return 0;

}
