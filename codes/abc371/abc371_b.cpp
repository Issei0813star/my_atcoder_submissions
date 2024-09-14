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
	vector<bool> a(n);
	for (int i = 0; i < n; i++) a[i] = false;

	for (int i = 0; i < m; i ++) {
		int c;
		char s;
		cin >> c;
		cin >> s;
		if(s == 'F') {
			cout << "No" << endl;
			continue;
		}
		if(!a[c - 1]) {
			cout << "Yes" << endl;
			a[c -1] = true;
			continue;
		}
		cout << "No"<< endl;
	}
	return 0;
}
