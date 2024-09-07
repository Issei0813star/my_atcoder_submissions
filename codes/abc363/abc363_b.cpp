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
	ll n, t, p;
	cin >> n >> t >> p;

	int over = 0;

	vector<ll> a(n);

	for (int i = 0; i < n; i++) {
		int l;
		cin >> l;
		a[i] = l;
		if(l >= t) {
			over ++;
		}
	}

	if(over >= p) {
		cout << 0 << endl;
		return 0;
	}

	sort(a.begin(), a.end(), greater<ll>());

	int c = a[p-1];
	cout << t - c << endl;

	return 0;
}
