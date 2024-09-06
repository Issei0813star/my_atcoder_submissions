#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    long long X, Y;
    cin >> X >> Y;
    
    vector<long long> sweets(N), spices(N);

    for (int i = 0; i < N; ++i) {
        cin >> sweets[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> spices[i];
    }

    // 大きい順に並べ替え
    sort(sweets.begin(), sweets.end(), greater<>());
    sort(spices.begin(), spices.end(), greater<>());

    long long sum_sweets = 0;
    long long sum_spices = 0;
    int countX = 0;
    int countY = 0;

    // 甘さの合計がXを超えるまで料理を食べ続ける
    for (int i = 0; i < N; ++i) {
        sum_sweets += sweets[i];
        countX++;
        if (sum_sweets > X) {
            break;
        }
    }

    // しょっぱさの合計がYを超えるまで料理を食べ続ける
    for (int i = 0; i < N; ++i) {
        sum_spices += spices[i];
        countY++;
        if (sum_spices > Y) {
            break;
        }
    }

    // 甘さとしょっぱさのいずれかで制約を超える場合、最小の料理数を選ぶ
    cout << min(countX, countY) << endl;

    return 0;
}
