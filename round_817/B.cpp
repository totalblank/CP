#include <iostream>
#include <string>
using namespace std;

void solve() {

    int n; cin >> n;
    string s1, s2; cin >> s1 >> s2;

    for(int i=0; i<n; i++) {
        if(s1[i]=='G') s1[i]='B';
        if(s2[i]=='G') s2[i]='B';
    }

    for(int i=0; i<n; i++) {
        if(s1[i] != s2[i]) {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main() {
    int t; cin >> t;
    while(t--) solve();

    return 0;
}