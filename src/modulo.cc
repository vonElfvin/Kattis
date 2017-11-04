#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    unordered_set<int> modulos;
    int read{};
    for(int i{}; i<10; ++i){
        cin >> read;
        modulos.insert(read%42);
    }
    cout << modulos.size();
}