#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> grid(8);
    for (int i = 0; i < 8; ++i) {
        cin >> grid[i];
    }

    vector<bool> rowHasPiece(8, false); 
    vector<bool> colHasPiece(8, false); 

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (grid[i][j] == '#') {
                rowHasPiece[i] = true;
                colHasPiece[j] = true;
            }
        }
    }

    int safeSpots = 0;

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (grid[i][j] == '.' && !rowHasPiece[i] && !colHasPiece[j]) {
                safeSpots++;
            }
        }
    }

    cout << safeSpots << endl;
    return 0;
}
