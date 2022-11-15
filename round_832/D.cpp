#include <bits/stdc++.h>
using namespace std;

int n,q;
int a[200000+8];
int prefix[200000+8];
int zeros[200000+8];

int main() {
	prefix[0] = 0;
	zeros[0] = 0;

	cin >> n >> q;
	for(int i=1; i<=n; i++){
		cin >> a[i];
		prefix[i] = (prefix[i-1] ^ a[i]);
		zeros[i] = zeros[i-1] + (a[i]==0);
	}

	cin >> q;
	while(q--) {
		int l, r;
		cin >> l >> r;

		// check whether the subarray consists entirely of zeros
		if(zeros[r] - zeros[l-1] == l-r+1) {
			cout << 0 << endl;
			continue;
		}

		// check whether the subarray XOR is zero, if not, there is not solution
		if( (prefix[r] ^ prefix[l-1]) == 0 ) {
			// check whether the subarray length is odd, if it is, one step will suffice
			if( (l-r+1) % 2 ) {
				cout << "1\n";
			} else {
				// check if the first or last element of the subarray
				// is 0, if it is, one step will suffice
				if(a[l] == 0 || a[r] == 0) {
					cout << "1\n";
				} else {
				}
			}
		} else {
			cout << "-1\n";
		}
	}

	return 0;
}
