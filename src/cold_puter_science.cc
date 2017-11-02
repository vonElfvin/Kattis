#include <iostream>

int main(){
    int size{}, result{}, temp{};

    std::cin >> size;
    for(int i{}; i<size; ++i){
        std::cin >> temp;
        if(temp<0){
            ++result;
        }
    }
    std::cout << result;
}