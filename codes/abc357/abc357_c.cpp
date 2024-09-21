#include <bits/stdc++.h>

using namespace std;

// 定数
const int INF = 1e9;         // 無限大
const long long LINF = 1e18; // 長い無限大
const int MOD = 1e9 + 7;     // モジュロ

// 型定義
using ll = long long;
using PII = pair<int, int>;

std::string toTernary(int num, int N) {
    std::string ternary;
    for (int i = 0; i < N; ++i) {
        ternary = std::to_string(num % 3) + ternary;
        num /= 3;
    }
    return ternary;
}

bool isMostSignificantDigitOne(int num, int N) {
    std::string ternary = toTernary(num, N);
    return ternary[0] == '1';
}

int main() {
	int N;
    cin >> N;

    int size = pow(3, N);
    vector<vector<char>> carpet(size, vector<char>(size, '#'));

    //レベル1から走査
    for (int l = 1; l <= N; l ++) {
        for (int i = 0; i < size; i ++) {
            for (int j = 0; j < size; j ++) {
                //レベル桁の３進数で表して、最上位桁が1であれば.に変更
                if(isMostSignificantDigitOne(i, l) && isMostSignificantDigitOne(j, l)) {
                    carpet[i][j] = '.';
                }
            }
        }
    }
    for(vector<char> c : carpet) {
        string str(c.begin(), c.end());
        cout << str << endl;
    }
    return 0;
}
