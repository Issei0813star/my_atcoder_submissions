#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n, x, y;
	cin >> n >> x >> y;
	vector<ll> a(n), b(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	sort(a.begin(), a.end(), greater<>());
	sort(b.begin(), b.end(), greater<>());
	int c1 = 0, c2 = 0;
	ll sx = 0, sy = 0;
	for (int i = 0; i < n; i++) {
		sx += a[i];
		c1++;
		if (sx > x) break;
	}
	for (int i = 0; i < n; i++) {
		sy += b[i];
		c2++;
		if (sy > y) break;
	}
	cout << min(c1, c2) << '\n';
}
