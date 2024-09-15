#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// グラフを隣接行列で表現
vector<vector<int>> adjG, adjH, A;

// 与えられたパーミュテーションに基づき、HのグラフとGのグラフを同型にするためのコストを計算
int calculate_cost(vector<int>& perm, int N) {
    int cost = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (adjG[i][j] != adjH[perm[i]][perm[j]]) {
                cost += A[perm[i]][perm[j]];
            }
        }
    }
    return cost;
}

int main() {
    int N, MG, MH;
    cin >> N >> MG;

    // グラフGとHの隣接行列を初期化
    adjG.assign(N, vector<int>(N, 0));
    adjH.assign(N, vector<int>(N, 0));
    A.assign(N, vector<int>(N, 0));

    // Gの辺の情報を読み込み
    for (int i = 0; i < MG; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;  // 0-indexed に変換
        adjG[u][v] = adjG[v][u] = 1;
    }

    // Hの辺の情報を読み込み
    cin >> MH;
    for (int i = 0; i < MH; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;  // 0-indexed に変換
        adjH[a][b] = adjH[b][a] = 1;
    }

    // コスト行列の読み込み
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            cin >> A[i][j];
            A[j][i] = A[i][j];  // 対称行列
        }
    }

    // 頂点の順列（パーミュテーション）を作成
    vector<int> perm(N);
    for (int i = 0; i < N; i++) {
        perm[i] = i;
    }

    int min_cost = INT_MAX;

    // 頂点の全ての並べ替えを試して、最小コストを求める
    do {
        int current_cost = calculate_cost(perm, N);
        min_cost = min(min_cost, current_cost);
    } while (next_permutation(perm.begin(), perm.end()));

    // 最小コストを出力
    cout << min_cost << endl;

    return 0;
}
