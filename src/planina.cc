#include <iostream>
#include <cmath>

int main(){
    int n{};
    std::cin >> n;
    int result = static_cast<int>((1+pow(2,n))*(1+pow(2,n)));
    std::cout << result << std::endl;
}