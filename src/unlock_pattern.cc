#include <iostream>
#include <map>
#include <iomanip>
#include <iterator>
#include <cmath>

using namespace std;

int main(){
    map<int, pair<int,int>> order_coordinate{};
    int order{};
    for(int y{}; y<3; ++y){
        for(int x{}; x<3; ++x){
            cin >> order;
            order_coordinate[order] = make_pair(x,y);
        }
    }
    double result{};
    auto prev = order_coordinate.begin();
    for(auto current=next(prev); current!=order_coordinate.end(); ++current){
        result += sqrt(pow(prev->second.first-current->second.first,2)+pow(prev->second.second-current->second.second,2));
        prev = current;
    }
    cout << fixed << setprecision(10) << result;
}