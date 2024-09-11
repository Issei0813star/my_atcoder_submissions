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
	ll n, k;
	cin >> n >> k;

	string s;
	cin >> s;

	sort(s.begin(), s.end());

	int ans = 0;

	do {
		bool ok = true;
		for(int i = 0; i < (n-k+1); i ++) {
			string t = s.substr(i, k);
			string rt = t;
			reverse(rt.begin(), rt.end());
			if(t == rt) ok = false;
		}
		if(ok) ans ++;
	}
	while (next_permutation(s.begin(), s.end()));
	cout << ans << endl;
	return 0;
}
