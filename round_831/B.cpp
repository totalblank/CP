/*
 * I do not know how this code works yet
 */

#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long n, max_d = 0; cin >> n;
	long long ans = 0;
	while(n--) {
		long long a, b;
		cin >> a >> b;

		long long small, large;
		small = (a <= b ? a : b);
		large = (a <= b ? b : a);

		ans += 2*small;
		max_d = max(large, max_d);
	}
	ans += 2*max_d;
	cout << ans << '\n';
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}
