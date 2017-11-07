#include <iostream>

using namespace std;

int main(){
    int n{}, T{}, temp{}, result{};
    cin >> n >> T;
    for(int i{}; i<n; ++i){
        cin >> temp;
        T-=temp;
        if(T>=0){
            ++result;
        }
    }
    cout << result << endl;
}