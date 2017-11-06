#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n{}, temp{};
    vector<int> seeds{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> temp;
        seeds.push_back(temp);
    }
    sort(seeds.rbegin(), seeds.rend());
    int result{};
    for(int i{}; i<n; ++i){
        result = max(seeds.at(i)+i, result);
    }
    cout << result + 2 << endl;
}