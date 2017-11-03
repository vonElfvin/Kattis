#include <iostream>

int main(){
    while(true){
        int n{}, v{}, t_prev{}, t_temp{}, t{}, result{};
        std::cin >> n;
        if(n==-1)
            break;
        
        for(int i{}; i<n; ++i){
            std::cin >> v >> t;
            t_temp = t;
            t -= t_prev;
            t_prev = t_temp;
            result += v*t;
        }
        std::cout << result << " miles" << std::endl;
    }
}