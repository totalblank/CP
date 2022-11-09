#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int n, a;

void solve() {
	cin >> n;
	long long s1 = 0, s2 = 0;
	for(int i=0; i<n; i++) {
		cin >> a;
		if(a > 0) s1 += a;
		else s2 += a;
	}

	s2 = -s2;
	cout << (s1 - s2 < 0 ? s2 - s1 : s1 - s2) << endl;
}

int main() {
	int t; cin >> t;
	while(t--) solve();

	return 0;
}
