#include <iostream>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(){
    int n{}, temp{};
    while(true){
        vector<int> first{}, second{};
        unordered_map<int, int> original_index{};
        cin >> n;
        if(n==0) break;
        for(int i{}; i<n; ++i){
            cin >> temp;
            first.push_back(temp);
            original_index[i] = temp;
        }
        for(int i{}; i<n; ++i){
            cin >> temp;
            second.push_back(temp);
        }
        sort(first.begin(), first.end());
        sort(second.begin(), second.end());
        for(int i{}; i<n; ++i){
            int j = distance(first.begin(), find(first.begin(), first.end(), original_index[i]));
            cout << second.at(j) << endl;
        }
        cout << endl;
    }
}