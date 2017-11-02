#include <iostream>

int main(){
    int a{}, b{};
    std::cin >> a >> b;
    if(a<0){
        if(b<0){
            std::cout << 3;
        }else{
            std::cout << 2;
        }
    }else{
        if(b<0){
            std::cout << 4;
        }else{
            std::cout << 1;
        }
    }
}