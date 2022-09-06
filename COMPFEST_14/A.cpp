#include <iostream>

int main() {
    long long n,m;
    std::cin >> n >> m;

    if(m==1) {
        std::cout << n-1 << '\n';
    } else {
        std::cout << n*(m-1) << '\n';
    }

    return 0;
}
