#include <iostream>

int main(){
    int x{}, n{}, result{}, temp{};
    std::cin >> x >> n;
    for(int i = 0; i<n; ++i){
        std::cin >> temp;
        result += x-temp;
    }
    std::cout << result + x << std::endl;
}