#include <iostream>
#include <vector>
using namespace std;

int H, W, K;
vector<string> grid;
int result = 0;
vector<vector<bool>> visited;
int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void dfs(int x, int y, int steps) {
    if (steps == K) {
        result++;
        return;
    }

    visited[x][y] = true;

    for (int i = 0; i < 4; ++i) {
        int nx = x + directions[i][0];
        int ny = y + directions[i][1];

        if (nx >= 0 && nx < H && ny >= 0 && ny < W && grid[nx][ny] == '.' && !visited[nx][ny]) {
            dfs(nx, ny, steps + 1);
        }
    }

    visited[x][y] = false;
}

int main() {
    cin >> H >> W >> K;
    grid.resize(H);
    visited.resize(H, vector<bool>(W, false));

    for (int i = 0; i < H; ++i) {
        cin >> grid[i];
    }

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (grid[i][j] == '.') {
                dfs(i, j, 0);
            }
        }
    }

    cout << result << endl;
    return 0;
}
