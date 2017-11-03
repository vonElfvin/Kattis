#include <iostream>
#include <unordered_set>


int main(){
    while(true){  
        int temp{}, n{}, m{}, result{};
        std::unordered_set<int> jack;
        std::cin >> n >> m;
        if(n==0 && m==0){
            break;
        }
        while(n-- > 0){
            std::cin >> temp;
            jack.insert(temp);
        }
        while(m-- > 0){
            std::cin >> temp;
            if(jack.find(temp) != jack.end()){
                ++result;
            }
        }
        std::cout << result << std::endl;
    }
    return 0;
}