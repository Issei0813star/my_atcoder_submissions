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
	ll N;
	cin >> N;
	
	vector<int> arr1(N);
	vector<int> arr2(N);
    
    for (int i = 0; i < N; ++i) {
        cin >> arr1[i];
    }

		for (int i = 0; i < N; ++i) {
        cin >> arr2[i];
    }

    int max_value_1 = *max_element(arr1.begin(), arr1.end());
		int max_value_2 = *max_element(arr2.begin(), arr2.end());

    cout << max_value_1 + max_value_2 << endl;
}
