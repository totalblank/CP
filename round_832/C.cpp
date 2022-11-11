#include <bits/stdc++.h>
using namespace std;

int a[200000+8];

void solve() {
	int n; cin >> n;

	for(int i=0; i<n; i++)
		cin >> a[i];

	int mn_elem = *min_element(a, a+n);

	if(a[0] == mn_elem) {
		cout << "Bob\n";
	} else {
		cout << "Alice\n";
	}
}

int main() {
	int t; cin >> t;
	while(t--) solve();

	return 0;
}
