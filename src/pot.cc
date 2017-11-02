#include <iostream>
#include <cmath>

int main(){
    int in{}; 
    int result{};

    while(std::cin >> in){
        result += static_cast<int>(pow(in/10, in%10));
    }
    std::cout << result;
}