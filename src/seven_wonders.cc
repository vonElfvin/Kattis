#include <iostream>
#include <cmath>

int main(){
    std::string s{};
    int T{}, C{}, G{}, result{};
    getline(std::cin, s);
    for(char const c : s){
        switch(c){
            case('T'):
                ++T;
                break;
            case('C'):
                ++C;
                break;
            case('G'):
                ++G;
                break;
            default:
                break;
        }
    }
    result += T*T + C*C + G*G;
    result += std::min(std::min(T,C), G)*7;
    std::cout << result;
}