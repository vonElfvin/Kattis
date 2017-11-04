#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<int, int> x_count{}, y_count{};
    int x{}, y{};
    for(int i{}; i<3; ++i){
        cin >> x >> y;
        auto it = x_count.find(x);
        if (it != x_count.end()){
            it->second = 2;
        }else{
            x_count.insert({x, 1});
        }
        it = y_count.find(y);
        if (it != y_count.end()){
            it->second = 2;
        }else{
            y_count.insert({y, 1});
        }
    }
    for(auto& p : x_count){
        if(p.second == 1){
            cout << p.first << ' ';
        }
    }
    for(auto& p : y_count){
        if(p.second == 1){
            cout << p.first << endl;
        }
    }
}