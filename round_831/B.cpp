#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

void solve() {
	int n; cin >> n;
	vector<pair<int, int>> rectArray(n+1);

	for(int i=1; i<=n; i++) {
		// first element is the side parallel to x axis
		// second element is the side parallel to y axis
		int t1, t2; cin >> t1 >> t2;
		rectArray[i].first = (t1 <= t2 ? t1 : t2);
		rectArray[i].second = (rectArray[i].first == t1 ? t2 : t1);
		// now, every element of the array has smallest side
		// as its first element and largest side as its
		// second element.
	}

	// sort the elements of the array by second elements
	sort(rectArray.begin(), rectArray.end(), sortbysec);

}

int main() {
	int t; cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}
