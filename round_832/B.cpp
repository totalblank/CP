#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;

	cout << n/2 + n%2 << endl;

	int i=1, counter=0;
	while(counter < n/2) {
		cout << i << ' ' << 3*n-i+1 << endl;
		i+=3;
		counter++;
	}

	if(n%2) cout << (3*n)/2 + 1 << ' ' << (3*n)/2 + 2 << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

	return 0;
}
