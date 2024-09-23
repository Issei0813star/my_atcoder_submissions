#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    
    vector<int> ans(n); 
    stack<int> stc;
    
    for (int i = n - 2; i >= 0; i--) {
        while (!stc.empty() && h[stc.top()] < h[i + 1]) {
            stc.pop();
        }

        stc.push(i + 1);

        ans[i] = stc.size();
    }
    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return 0;
}
