#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

// 定数
const int INF = 1e9;         // 無限大
const long long LINF = 1e18; // 長い無限大
const int MOD = 1e9 + 7;     // モジュロ

// 型定義
using ll = long long;
using PII = pair<int, int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int H;
    cin >> H;

    int W;
    cin >> W;
    
    cin.ignore();

    int indexH;
    int indexW;

    cin >> indexH;
    cin >> indexW;

    cin.ignore();

    vector<string> grid;
    for (int i = 0; i < H; i ++) {
        string record;
        getline(cin, record);
        grid.push_back(record);
    }

    string actions;
    cin >> actions;

    for (char a : actions) {
        //今いる行
        string record = grid[indexH - 1];
        if(a == 'R') {
            if(indexW == W || record[indexW] == '#') {
                continue;
            }
            indexW ++;
            continue;
        }
        if(a == 'L') {
            if(indexW == 1 || record[indexW -2] == '#') {
                continue;
            }
            indexW --;
            continue; 
        }
        if(a == 'U') {
            //一つ上の行
            if(indexH == 1) {
                continue;
            }
            string upper_record = grid[indexH - 2];
            if(upper_record[indexW - 1] == '#') {
                continue;
            }
            indexH --;
            continue;
        }
        if(a == 'D') {
            if(indexH == H) {
                continue;
            }
            string downer_record = grid[indexH];
            if(downer_record[indexW -1] == '#'){
                continue;
            }
            indexH ++;
            continue;
        }
    }

    cout << indexH << ' ' << indexW << endl;
    return 0;
}
