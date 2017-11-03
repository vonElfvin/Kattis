#include <iostream>

int main(){
    int n{}, m{}, w{}, h{};
    std::cin >> n >> w >> h;
    for(int i{}; i<n; ++i){
        std::cin >> m;
        if(m*m<=(h*h+w*w)){
            std::cout << "DA" << std::endl;
        }else{
            std::cout << "NE" << std::endl;
        }
    }
}