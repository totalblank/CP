#include <iostream>
using namespace std;

void solve() {
    long long n,k,b,s;
    cin >> n >> k >> b >> s;

    if(s < k*b || s > k*b + n * (k-1)) {
        cout << -1 << endl;
        return;
    }

    long long a[n];
    for(long long i=0; i<n; i++) a[i] = 0LL;
    a[0] = k*b;
    s -= k*b;

    for(int i=0; i<n; i++) {
        if(s > 0) {
            a[i] += min(k-1, s);
            s -= min(k-1, s);
        } 
    }

    for(long long i=0; i<n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    return 0;
}