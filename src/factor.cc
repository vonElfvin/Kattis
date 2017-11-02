#include <iostream>
#include <cmath>

int main(){
    int number_of_articles{}, impact_factor{};
    std::cin >> number_of_articles >> impact_factor;
    std::cout << ceil(number_of_articles*(impact_factor-0.999999));
}