#include <bits/stdc++.h>
using namespace std;
long long a[200000+8];
long long diff[200000+8];

void solve() {
	int n; cin >> n;
	for(int i=1; i<=n; i++) {
		cin >> a[i];
		if(i > 1) {
			diff[i] = a[i] - a[i-1];
		}
	}

	sort(diff, diff+n);
	cout << diff[n] + diff[n-1] << endl;

}

int main() {
	int t; cin >> t;
	while(t--) solve();

	return 0;
}
