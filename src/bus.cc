#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n{}, k{}, res{};
    cin >> n;
    for(int i{}; i<n; ++i){
        cin >> k;
        res = pow(2,k)-1;
        cout << res << endl;
    }
}