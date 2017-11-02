#include <iostream>

int main(){
    int king{}, queen{}, rooks{}, bishops{}, knights{}, pawns{};
    std::cin >> king >> queen >> rooks >> bishops >> knights >> pawns;
    std::cout << 1-king << ' ' << 1-queen << ' ' << 2-rooks << ' ' << 2-bishops << ' ' << 2-knights << ' ' << 8-pawns;
}