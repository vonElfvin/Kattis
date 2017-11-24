#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    int n{};
    int64_t candy{}, m{};
    cin >> n;
    for(int i{}; i<n; ++i){
        __int128 candies{};
        cin >> m;
        for(int j{}; j<m; ++j){
            cin >> candy;
            candies+=candy;
        }
        if(candies%m==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}