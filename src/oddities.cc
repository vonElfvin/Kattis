#include <iostream>

int main(){
    int n{}, temp{};
    std::cin >> n;
    for(int i{}; i<n; ++i){
        std::cin >> temp;
        if(temp%2==0){
            std::cout << temp << " is even" << std::endl;
        }else{
            std::cout << temp << " is odd" << std::endl;
        }
    }
}