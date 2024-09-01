#include <bits/stdc++.h>
using namespace std;
#define INF (long long)1e+18

int main(void){
    int n;
    long long x, dp_even = 0, dp_odd = -INF, tmp;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        tmp = dp_even;
        dp_even = max(dp_odd + 2 * x, dp_even);
        dp_odd = max(tmp + x, dp_odd);
    }
    
    cout << max(dp_even, dp_odd) << endl;
    return 0;
}
