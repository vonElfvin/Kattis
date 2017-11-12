#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    unordered_set<int> ranges{};
    unordered_set<int> exclude{};
    vector<int> bus_numbers{};
    int n{}, temp{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> temp;
        bus_numbers.push_back(temp);
    }
    sort(bus_numbers.begin(), bus_numbers.end());
    for(int i{}; i<bus_numbers.size(); ++i){
        if(i-1>=0 && i+1<bus_numbers.size() && bus_numbers.at(i)==bus_numbers.at(i-1)+1 && bus_numbers.at(i)==bus_numbers.at(i+1)-1){
            ranges.insert(bus_numbers.at(i-1));
            exclude.insert(bus_numbers.at(i));
        }
    }
    for(int i{}; i<bus_numbers.size(); ++i){
        if(exclude.find(bus_numbers.at(i))==exclude.end()){
            cout << bus_numbers.at(i);
            if(ranges.find(bus_numbers.at(i))!=ranges.end()){
                cout << '-';
            }else{
                cout << ' ';
            }
        }
    }
}