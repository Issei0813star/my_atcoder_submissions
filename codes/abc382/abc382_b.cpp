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
	int n, d;
	cin >> n >> d;
	
  string s;
  cin >> s;
  int count_c = std::count(s.begin(), s.end(), '@');

  int remain_count = count_c - d;

  string ans = "";

  for (size_t i = 0; i < s.size(); ++i) {
    if(s[i] == '.') {
      ans += ".";
      continue;
    }
    if(remain_count == 0) {
      ans += ".";
      continue;
    }
    ans += '@';
    remain_count --;
  }

  cout << ans << endl;

  return 0;
}
