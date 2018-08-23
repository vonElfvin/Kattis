#include <iostream>

int main() {
    int n{};
    std::cin >> n;

    int k{};
    for (int i{1}; i<n; i*=2) {
        ++k;
    }
    std::cout << k + 1;
}