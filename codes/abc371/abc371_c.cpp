#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// グラフを隣接行列で表現
vector<vector<int>> adjG, adjH, A;
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

    adjG.assign(N, vector<int>(N, 0));
    adjH.assign(N, vector<int>(N, 0));
    A.assign(N, vector<int>(N, 0));

    for (int i = 0; i < MG; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        adjG[u][v] = adjG[v][u] = 1;
    }

    cin >> MH;
    for (int i = 0; i < MH; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--; 
        adjH[a][b] = adjH[b][a] = 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            cin >> A[i][j];
            A[j][i] = A[i][j];
        }
    }

    vector<int> perm(N);
    for (int i = 0; i < N; i++) {
        perm[i] = i;
    }

    int min_cost = INT_MAX;

    do {
        int current_cost = calculate_cost(perm, N);
        min_cost = min(min_cost, current_cost);
    } while (next_permutation(perm.begin(), perm.end()));

    cout << min_cost << endl;

    return 0;
}
