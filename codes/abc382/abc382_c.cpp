#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> people(200010, -1); 
    int cur = 200010;

    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;
        
        while (cur > p) {
            --cur;
            people[cur] = i + 1; 
        }
    }

    for (int i = 0; i < m; ++i) {
        int sushi;
        cin >> sushi;
        cout << people[sushi] << endl; 
    }

    return 0;
}
