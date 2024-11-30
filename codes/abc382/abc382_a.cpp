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
	ll n, d;
	cin >> n >> d;
	
  string s;
  cin >> s;
  int count_d = std::count(s.begin(), s.end(), '.');

  cout << count_d + d << endl;


  return 0;
}
