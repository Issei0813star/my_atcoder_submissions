#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll N, X, Y;
    cin >> N >> X >> Y;

    vector<ll> sweets(N), spices(N);

    // 甘さの入力
    for (ll i = 0; i < N; i++) {
        cin >> sweets[i];
    }

    // しょっぱさの入力
    for (ll i = 0; i < N; i++) {
        cin >> spices[i];
    }

    // 大きい順に並べ替え
    sort(sweets.begin(), sweets.end(), greater<>());
    sort(spices.begin(), spices.end(), greater<>());

    ll sum_sweets = 0, sum_spices = 0;
    ll countX = 0, countY =0;

    // 甘さとしょっぱさの両方の条件が超えるまで料理を食べる
    for (ll s : sweets) {
        sum_sweets += s;
        countX ++;
        if(sum_sweets > X) break;
    }

    for (ll s : spices) {
        sum_spices += s;
        countY ++;
        if(sum_spices > Y) break;
    }

    cout << min(countX, countY) << endl;

    return 0;
}
