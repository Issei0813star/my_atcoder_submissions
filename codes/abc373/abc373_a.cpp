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
	int count = 0;
	for (int i = 1; i <= 12; i ++) {
		string s;
		cin >> s;
		if(s.length() == i) {
			count ++;
		} 
			
	}

	cout << count << endl;
}
