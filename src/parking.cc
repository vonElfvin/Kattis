#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    int n{}, m{}, temp{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> m;
        int min{99}, max{};
        for(int j{}; j<m; ++j){
            cin >> temp;
            if(min>temp) min=temp;
            if(max<temp) max=temp;
        }
        cout << (max-min)*2 << endl;
    }
}